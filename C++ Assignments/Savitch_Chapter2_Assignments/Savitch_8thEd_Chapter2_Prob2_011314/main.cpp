/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 13, 2014, 7:44 PM
 */

#include <iostream>
using namespace std;
//Global Constants

//Function Prototype

//Execution begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float artAm, mouwght, diewght, tAmm, tAmd;
    
    cout<<"Input the amount of artificial sweetener needed to kill a mouse:"<<endl;
    cin>>artAm;
    cout<<"Input the weight of the mouse in lbs. :"<<endl;
    cin>>mouwght;
    cout<<"Input the weight of dieter in lbs. (after diet has ended):"<<endl;
    cin>>diewght;
    
    tAmm = mouwght*artAm;
    tAmd = diewght/tAmm;
    
    cout<<"The amount of diet soda pop you can drink without dying is:"<<tAmd;
    
    
    
    

    return 0;
}

