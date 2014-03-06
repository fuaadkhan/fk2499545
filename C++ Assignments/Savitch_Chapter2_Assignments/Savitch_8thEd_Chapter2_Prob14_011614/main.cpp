/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 16, 2014, 10:18 AM
 * Create a Mad Libs program
 * Savitch Chapter 2, Problem 14
 */

//System Libraries
#include <iostream>
using namespace std;

//Global constants

//Function prototype

//Execution begins here!
int main(int argc, char** argv) {
        //Declare variables
    string name, yname, food, adj, color, anim;
    int numb;
    
    cout<<"Let's play Mad Libs!"<<endl;
        //Input  set of questions
    cout<<"Input the first or last name of your instructor (with caps) :"<<endl;
    cin>>name;
    cout<<"Input your name (with caps):"<<endl;
    cin>>yname;
    cout<<"Input a food (singular) :"<<endl;
    cin>>food;
    
    cout<<"Input a number between 100 and 120 :"<<endl;
    cin>>numb;
    do {
    if (numb<100||numb>120){
        cout<<"error: Invalid number. The number you have inputed"
                " is less than 100 or greater than 120. Please Try again"<<endl;
    }
    cin>>numb;
    }while (numb<100||numb>120);
    
    cout<<"Input an adjective :"<<endl;
    cin>>adj;
    cout<<"Input a color :"<<endl;
    cin>>color;
    cout<<"Input an animal :"<<endl;
    cin>>anim;
    
        //Output the Mad Lib
    cout<<"Dear Instructor "<<name<<","<<endl;
    cout<<" "<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<numb<<"."<<"Next, my "<<adj<<" pet"<<endl;
    cout<<anim<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late"<<endl;
    cout<<" "<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<yname;

    return 0;
}

