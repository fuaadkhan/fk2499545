/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on February 3, 2014, 5:46 PM
 * tic tac toe
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void ClrBrd();
void PrntBrd();
void Info();
void PlcePce(int, int);
void GetInput();
void CheckWin();

//Board to display characters
char Board[3][3];
int turn = 1;
//Execution begins here
int main(){
    //Declare variables
    bool Play = true;
    int PieceValue = 1, IBoard[3][3] = {0};
    Info();
    ClrBrd();
    PrntBrd();
    int command = 0;
    cin>>command;
    if(command == 2)
        Play = false;
    int BoardFull = 0;
    while (Play){
        GetInput();
        CheckWin();
        BoardFull++;
        
        
        
        //Check if there is a tie
        if(BoardFull == 9){
            cout<<"TIE GAME"<<endl;
            Play = false;
        }
    }
    return 0;
}

void ClrBrd(){
    for (int i = 0; i < 3; i++)
		for (int j=0; j < 3; j++)
			Board[i][j] = ' ';
}

void PrntBrd (){
    cout<<"        1       2       3 "<<endl<<endl;
    cout<<"1       " << Board[0][0] <<"   |   "<<Board[1][0]<<"   |    "<<Board[2][0]<<endl;
    cout<<"        ____|_______|_____"<<endl;
    cout<<"2       " << Board[0][1] <<"   |   "<<Board[1][1]<<"   |    "<<Board[2][1]<<endl;
    cout<<"        ____|_______|_____"<<endl;
    cout<<"3       " << Board[0][2] <<"   |   " <<Board[1][2]<<"   |    "<<Board[2][2]<<endl;
    cout<<"            |       |"<<endl;
    cout<<endl<<endl;
}

void Info(){
    cout<<"1.Start Game"<<endl;
    cout<<"2.Exit Game" <<endl;
    cout<<"Enter the row number, followed by a space, and then enter the column number"<<endl;
}

void PlcePce(int row, int col){
    
    int IBoard[3][3] = {0};
    int PieceValue = 1;
    //Check turn to change value of piece
    char piece;
    if(turn % 2 == 0){
        piece = 'O';
    }
    else{
        piece = 'X';
    }
    Board[row][col] = piece;
    
    //Place a value of 1 or -1 into a separate array to allow for easier win calculations
    
    if(piece == 'O'){
        PieceValue = -1;
    }
    else if(piece == 'X'){
        PieceValue = 1;
    }
    IBoard[row][col]  = PieceValue;
    
    turn++;
    
    PrntBrd();
}

void GetInput(){
    int IBoard[3][3] = {0};
    //Check Turn
    if(turn % 2 == 0)
        cout<<"Player 2, its your turn."<<endl;
    else
        cout<<"Player 1, its your turn."<<endl;
    
    cout<<"Please select a location (ROW COL): "<<endl;
    int row = 0, col = 0;
    cin>>row>>col;
    //Check to see if input is valid
    if(row>3 || row<1 || col>3 || col<1){
        cout<<"Invalid range, try again."<< endl;
        cin>>row>>col;
    }
    if(IBoard[col - 1][row - 1] != 0){
        cout<<"Spot taken, try again."<< endl;
        cin>>row>>col;
    }
    PlcePce(col - 1, row - 1);  //Since arrays are 0 indexed base, have to change 
}

void CheckWin(){
    int IBoard[3][3] = {0};
    bool Play = true;
    bool WinX = false;
    bool WinO = false;
    //Check Horizontal Win
    for(int i = 0; i < 3; i++){
        int TotalValue = 0;
        for(int j = 0; j < 3; j++){
            TotalValue += IBoard[i][j];
        }
        if(TotalValue == 3){
            WinX = true;
        }
        else if(TotalValue == -3){
            WinO = true;
        }
    }
    //Check Vertical Win
    for(int j = 0; j < 3; j++){
        int TotalValue = 0;
        for(int i = 0; i < 3; i++){
            TotalValue += IBoard[i][j];
        }
        if(TotalValue == 3){
            WinX = true;
        }
        else if(TotalValue == -3){
            WinO = true;
        }
    }
    //Check Diagonal Win
    int TotalValue = 0;
    TotalValue = IBoard[0][0] + IBoard[1][1] + IBoard[2][2];
    if(TotalValue == 3) {
        WinX = true;
    }
    else if(TotalValue == -3){
        WinO = true;
    }
    TotalValue = IBoard[0][2] + IBoard[1][1] + IBoard[2][0];
    if(TotalValue == 3){
        WinX = true;
    }
    else if(TotalValue == -3){
        WinO = true;
    }
    //End Game if Won
    if(WinX){
        cout<<"Player 1 Wins"<<endl;
        Play = false;
        
    }
    if(WinO){
        cout<<"Player 2 Wins"<<endl;
        Play = false;
    
    }
}

