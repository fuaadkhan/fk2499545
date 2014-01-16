/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 16, 2014, 11:14 AM
 * Savitch chapter 2, Problem 15 
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float vlcty, tempSt, tempEn, tempN;
    
    //User input's the starting and ending temperature
    cout<<"Input the starting temperature in Celsius :"<<endl;
    cin>>tempSt;
    cout<<"Input the ending temperature in Celsius :"<<endl;
    cin>>tempEn;
    
    //Calculate velocity
    for (int tempN=tempSt; tempN<=tempEn ;tempN++){
        vlcty= 331.3+0.61*tempN;
        
        cout<<"At "<<tempN<<" degress Celsius the velocity of sound is "<<vlcty<<" m/s"<<endl;
    }
    
   
    return 0;
}

