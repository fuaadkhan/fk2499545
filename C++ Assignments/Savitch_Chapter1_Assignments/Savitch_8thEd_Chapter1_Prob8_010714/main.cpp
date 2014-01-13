/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 7, 2014, 8:45 PM
 * Produce the total value of the given coins
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here!
int main() {
    //Declare Variables
    int dimes, nkle, qrts, tdim, tnkle, tqrts, tcoin;
    
    cout<<"Press enter after entering a number.\n";
    cout<<"How many quarters do you have?\n";
    cin>>qrts;
    cout<<"How many nickels do you have?\n";
    cin>>nkle;
    cout<<"How many dimes do you have?\n";
    cin>>dimes;
    
    //Give value to each coin
    tdim = dimes*10;
    tnkle = nkle*5;
    tqrts = qrts*25;
    
    //Add the total value of coins
    tcoin = tdim+tnkle+tqrts;
    
    cout<<"You have ";
    cout<<tcoin;
    cout<<" cents.\n";
    
    return 0;
}

