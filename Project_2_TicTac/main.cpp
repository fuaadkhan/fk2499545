/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on February 9, 2014, 12:43 PM
 * Project Number 2 Tic Tac Toe with AI
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

//Global COnstant
const int LOSSES=2;//to hold losses in 2d array

//Function Prototypes
void gameBoard(char [],string,string,int);
char plyrTrn(int &);
char gtSpc(char [],int, string, string, int);
int advAI(char []);
void mrkSpc(char [],char,char,int &);
int gmOvr(char [],int &,string, string,int);
void rslt(int,int,string,string,int [][LOSSES],int &);
void rcrdScr(int [][LOSSES],int,string,string,int,int);

//Begin Execution Here
int main(int argc, char *argv[]){
    //Declare Variables
    const int SIZE=10,WINS=2;
    char board[SIZE]={'0','1','2','3','4','5','6','7','8','9'}; 
    char space; //Board Selection space
    char choice='y'; 
    int state=0;//Determines if game is over
    int player=1; //Determines which player's turn is happening
    int numPlyr; //Number of players
    int gmNum=1; //Number of games played
    int draws=0; //Counts number of draws
    char plyrMrk='X'; //Bases the X or O off player #
    string p1Name; 
    string p2Name; 
    int score[WINS][LOSSES]={0,0,0,0}; //Wins and losses for each player
    
    cout<<"What is Player 1's name?"<<endl;
    cin>>p1Name;
    
    //seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    do{
        //prompt for number of players or AI opponent selection
        cout<<"Enter 1 to play against an Easy AI opponent"<<endl;
        cout<<"Enter 2 to play against an Advanced AI opponent"<<endl;
        cout<<"Enter 3 for a 2 player game"<<endl;

        cin>>numPlyr;
    }while(numPlyr<1||numPlyr>3);//check proper input for selection
    //play while user selects yes
    do{
       //alternate first player's turn each game
       if(gmNum%2==1)
           player=1;//player 1 gets first turn if odd # game
       else
           player=2;//player 2 gets first turn if even # game
       state=0;//resets status of game to "not over"

       //reset game board values
       for (int i=0;i<SIZE;i++)
           board[i]='0'+i;
      
       do{
          //change AI name if playing
          if(numPlyr==1)p2Name="Easy AI";
          if(numPlyr==2)p2Name="Advanced AI";
          
          //draw board
          gameBoard(board,p1Name,p2Name,gmNum);
          
          //determine which player's turn
          plyrMrk=plyrTrn(player);
           
          //get user's selection for space
          space=gtSpc(board,player,p1Name,p2Name, numPlyr);
           
          //mark the board with selection
          mrkSpc(board,space,plyrMrk,player);
           
          //check to see if game is over
          state=gmOvr(board,player,p1Name,p2Name,gmNum);
          
       }while(state==0);
        
       //display result of game end
       gameBoard(board,p1Name,p2Name,gmNum);
       rslt(state,player,p1Name,p2Name,score,draws);

       //Ask if user would like to play the game again
       cout<<"Would you like to play again? (Y/N)"<<endl;

       cin>>choice;
    
    gmNum++;//adds to game# each time played    

    //runs again if yes    
    }while (choice=='y'||choice=='Y');

    //records the score by outputting to file
    rcrdScr(score,WINS,p1Name,p2Name,gmNum,draws);

    //Exit Stage Right
    return 0;
}

//outputs score into a file
void rcrdScr(int s[][LOSSES],int,string p1,string p2,int g,int d){
     string rsltFl;
     
     //get file name for output file
     cout<<endl;
     cout<<"Please specify a filename that you would like"<<endl
         <<"to output the results to (example:'results.txt'): ";
     cin>>rsltFl;
     
     //declare the output file and open
     ofstream outputFile;
     outputFile.open(rsltFl.c_str());

     //final results output to screen   
     cout<<"Games Played = "<<(g-1)<<" Draws = "<<d<<endl;
     cout<<" "<<p1<<"'s score: "<<endl<<s[0][0]<<" Wins "<<s[0][1]<<" Loss"<<endl;
     cout<<" "<<p2<<"'s score: "<<endl<<s[1][0]<<" Wins "<<s[1][1]<<" Loss"<<endl;
     
     //output results to file
     outputFile<<"Games Played = "<<(g-1)<<" Draws = "<<d<<" "<<endl;
     outputFile<<p1<<"'s score: "<<endl<<s[0][0]<<" Wins "<<s[0][1]<<" Loss "<<endl;
     outputFile<<p2<<"'s score: "<<endl<<s[1][0]<<" Wins "<<s[1][1]<<" Loss "<<endl;
     
     //close file
     outputFile.close();
}

//outputs winning game results
void rslt(int s,int p,string p1,string p2,int scr[][LOSSES],int &d){
     //Show end results of game
     if (s==1){

        if(p%2==1){
            cout<<p1<<" is the winner! Good job!"<<endl;
            scr[0][0]++;
            scr[1][1]++;
        }
        if(p%2==0){
            cout<<p2<<" is the winner! Good job!"<<endl;
            scr[1][0]++;
            scr[0][1]++;
        }
     }
     if (s==2){
         cout<<"The game has ended in a draw!"<<endl;
         d++;
     }
}

//determines if the  game is over
int gmOvr(char a[],int &p,string p1, string p2,int g){
    int s=0;
    //game ends in a win
    if (a[1]==a[2]&&a[2]==a[3])
         s=1;
    else if (a[4]==a[5]&&a[5]==a[6])
         s=1;
    else if (a[7]==a[8]&&a[8]==a[9])
         s=1;
    else if (a[1]==a[4]&&a[4]==a[7])
         s=1;
    else if (a[2]==a[5]&&a[5]==a[8])
         s=1;
    else if (a[3]==a[6]&&a[6]==a[9])
         s=1;
    else if (a[1]==a[5]&&a[5]==a[9])
         s=1;
    else if (a[3]==a[5]&&a[5]==a[7])
         s=1;
    
    //game ends in draw
    else if (a[1]!='1'&&a[2]!='2'&&a[3]!='3'&&a[4]!='4'
         &&a[5]!='5'&&a[6]!='6'&&a[7]!='7'&&a[8]!='8'&&a[9]!='9')
         s=2;
    
    //game continues
    else{
         s=0;
         p++;
    }    
    return s;
}


//marks the space the player selects
void mrkSpc(char a[],char sp,char mrk,int &p){
     if (sp=='1'&&a[1]=='1')
          a[1]=mrk;
     else if(sp=='2'&&a[2]=='2')
          a[2]=mrk;
     else if(sp=='3'&&a[3]=='3')
          a[3]=mrk;
     else if(sp=='4'&&a[4]=='4')
          a[4]=mrk;
     else if(sp=='5'&&a[5]=='5')
          a[5]=mrk;
     else if(sp=='6'&&a[6]=='6')
          a[6]=mrk;
     else if(sp=='7'&&a[7]=='7')
          a[7]=mrk;
     else if(sp=='8'&&a[8]=='8')
          a[8]=mrk;
     else if(sp=='9'&&a[9]=='9')
          a[9]=mrk;
     else{
          p--;//decrement player so that it runs again for the same player
     }
}

//Advanced AI board selection
int advAI(char a[]){
     //AI Checks for 2 horizontal and chooses remaining to win
     //Bottom Horizontal
     if(a[1]=='O'&&a[2]=='O'&&a[3]=='3')return 3;
     if(a[1]=='O'&&a[3]=='O'&&a[2]=='2')return 2;
     if(a[2]=='O'&&a[3]=='O'&&a[1]=='1')return 1;
     //Middle Horizontal
     if(a[4]=='O'&&a[5]=='O'&&a[6]=='6')return 6;
     if(a[4]=='O'&&a[6]=='O'&&a[5]=='5')return 5;
     if(a[5]=='O'&&a[6]=='O'&&a[4]=='4')return 4;
     //Top Horizontal
     if(a[7]=='O'&&a[8]=='O'&&a[9]=='9')return 9;
     if(a[7]=='O'&&a[9]=='O'&&a[8]=='8')return 8;
     if(a[8]=='O'&&a[9]=='O'&&a[7]=='7')return 7;

     //AI Checks for 2 vertical and chooses remaining to win
     //Left Vertical
     if(a[1]=='O'&&a[4]=='O'&&a[7]=='7')return 7;
     if(a[1]=='O'&&a[7]=='O'&&a[4]=='4')return 4;
     if(a[4]=='O'&&a[7]=='O'&&a[1]=='1')return 1;
     //Middle Vertical
     if(a[2]=='O'&&a[5]=='O'&&a[8]=='8')return 8;
     if(a[2]=='O'&&a[8]=='O'&&a[5]=='5')return 5;
     if(a[5]=='O'&&a[8]=='O'&&a[2]=='2')return 2;
     //Right Vertical
     if(a[3]=='O'&&a[6]=='O'&&a[9]=='9')return 9;
     if(a[3]=='O'&&a[9]=='O'&&a[6]=='6')return 6;
     if(a[6]=='O'&&a[9]=='O'&&a[3]=='3')return 3;
     
     //AI Checks for 2 diagonal to win
     //Bottom left -> top right
     if(a[1]=='O'&&a[5]=='O'&&a[9]=='9')return 9;
     if(a[1]=='O'&&a[9]=='O'&&a[5]=='5')return 5;
     if(a[5]=='O'&&a[9]=='O'&&a[1]=='1')return 1;
     //Top left -> bottom right
     if(a[3]=='O'&&a[5]=='O'&&a[7]=='7')return 7;
     if(a[3]=='O'&&a[7]=='O'&&a[5]=='5')return 5;
     if(a[5]=='O'&&a[7]=='O'&&a[3]=='3')return 3;
 
     //AI Checks for 2 horizontal spots held by player and chooses remaining
     //Bottom Horizontal 
     if(a[1]=='X'&&a[2]=='X'&&a[3]=='3')return 3;
     if(a[1]=='X'&&a[3]=='X'&&a[2]=='2')return 2;
     if(a[2]=='X'&&a[3]=='X'&&a[1]=='1')return 1;
     //Middle Horizontal
     if(a[4]=='X'&&a[5]=='X'&&a[6]=='6')return 6;
     if(a[4]=='X'&&a[6]=='X'&&a[5]=='5')return 5;
     if(a[5]=='X'&&a[6]=='X'&&a[4]=='4')return 4;
     //Top Horizontal
     if(a[7]=='X'&&a[8]=='X'&&a[9]=='9')return 9;
     if(a[7]=='X'&&a[9]=='X'&&a[8]=='8')return 8;
     if(a[8]=='X'&&a[9]=='X'&&a[7]=='7')return 7;
     
     //AI Checks for 2 vertical spots held by player and chooses remaining
     //Left Vertical
     if(a[1]=='X'&&a[4]=='X'&&a[7]=='7')return 7;
     if(a[1]=='X'&&a[7]=='X'&&a[4]=='4')return 4;
     if(a[4]=='X'&&a[7]=='X'&&a[1]=='1')return 1;
     //Middle Vertical
     if(a[2]=='X'&&a[5]=='X'&&a[8]=='8')return 8;
     if(a[2]=='X'&&a[8]=='X'&&a[5]=='5')return 5;
     if(a[5]=='X'&&a[8]=='X'&&a[2]=='2')return 2;
     //Right Vertical
     if(a[3]=='X'&&a[6]=='X'&&a[9]=='9')return 9;
     if(a[3]=='X'&&a[9]=='X'&&a[6]=='6')return 6;
     if(a[6]=='X'&&a[9]=='X'&&a[3]=='3')return 3;

     //AI Checks for 2 diagonal spots held by player and chooses remaining
     //Bottom Left -> top right
     if(a[1]=='X'&&a[5]=='X'&&a[9]=='9')return 9;
     if(a[1]=='X'&&a[9]=='X'&&a[5]=='5')return 5;
     if(a[5]=='X'&&a[9]=='X'&&a[1]=='1')return 1;
     //Top Left -> bottom right
     if(a[3]=='X'&&a[5]=='X'&&a[7]=='7')return 7;
     if(a[3]=='X'&&a[7]=='X'&&a[5]=='5')return 5;
     if(a[5]=='X'&&a[7]=='X'&&a[3]=='3')return 3;

     
     //if none of the above, select random available
     int aisp=rand()%9+1;

     return aisp;
}

//get player's selection for space
char gtSpc(char a[],int p, string p1, string p2,int numP){
     string space;//holds space typed by player
     char sp;//holds actual char value of first digit in string
     int aisp;//holds random# generated for easy ai selection
     do{
        //select space if player 1's turn
        if(p==1){
            cout<<p1<<", make your selection by typing the space number: ";
            cin>>space;
            
            sp=space[0];
        }
        //select space for player 2's turn
        else{
            //if player 2 is Easy AI
            if(numP==1){
                aisp=rand()%9+1;
                sp='0'+aisp;
            }
            //if player 2 is Advanced AI
            if(numP==2){
                sp='0'+advAI(a);
            }
            //if player 2 is a second user
            if(numP==3){
                cout<<p2<<", make your selection by typing the space number: ";
                cin>>space;
                
                sp=space[0];
            }
        }
        //ERROR CHECKING
        if(sp!='1'&&sp!='2'&&sp!='3'&&sp!='4'&&
           sp!='5'&&sp!='6'&&sp!='7'&&sp!='8'&&sp!='9')
            cout<<"Invalid selection!"<<endl;
     }while(sp!='1'&&sp!='2'&&sp!='3'&&sp!='4'&&
           sp!='5'&&sp!='6'&&sp!='7'&&sp!='8'&&sp!='9');
     return sp;
}

//Determine which player's turn it is
char plyrTrn(int &p){
     if (p%2==1){
         p=1;
         return 'X';
     }
     else if (p%2==0){
         p=2;
         return 'O';
     }
}

void gameBoard(char a[],string p1, string p2,int g){
    cout<<"Game "<<g<<endl;
    cout<<endl<<p1<<" is X's and "<<p2<<" is O's."<<endl<<endl;

    cout<<"        |   |    "<<endl;
    cout<<"      "<<a[7]<<" | "<<a[8]<<" | "<<a[9]<<" "<<endl;
    cout<<"     ___|___|___ "<<endl;
    cout<<"        |   |    "<<endl;
    cout<<"      "<<a[4]<<" | "<<a[5]<<" | "<<a[6]<<" "<<endl;
    cout<<"     ___|___|___ "<<endl;
    cout<<"        |   |    "<<endl;
    cout<<"      "<<a[1]<<" | "<<a[2]<<" | "<<a[3]<<" "<<endl;
    cout<<"        |   |    "<<endl<<endl;

}


