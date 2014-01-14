/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 13, 2014, 8:22 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float preSal, months, retrpay, nAnnsal, nMonsal, payIn=0.076;
    
    cout<<"Input your previous annual salary:"<<endl;
    cin>>preSal;
    
    retrpay = preSal*(payIn/2);
    nAnnsal = (preSal*(1+payIn));
    nMonsal = nAnnsal/12;
    
    cout<<"The new retroactive pay is "<<retrpay<<endl;
    cout<<"The new monthly salary is "<<nMonsal<<endl;
    cout<<"The new annual salary is "<<nAnnsal<<endl;
    
    return 0;
}

