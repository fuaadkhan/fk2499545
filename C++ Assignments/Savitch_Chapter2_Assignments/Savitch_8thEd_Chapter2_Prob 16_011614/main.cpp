/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 16, 2014, 11:39 AM
 * Savitch Chapter 2, Problem 16
 */

//System libraries
#include <iostream>
using namespace std;

//Global constants

//Function prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float radius, vm;
    
    //Input radius
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    
    //Calculate volume
    vm=(4.0/3.0)*3.1415*radius*radius*radius;
    
    //Output Volume
    cout<<"The volume is "<<vm<<endl;
    //Exit Stage right

    return 0;
}

