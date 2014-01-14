/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 13, 2014, 6:15 PM
 * Savitch Chapter two Problem 1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float ton, ounce, numbox, crlonc, crlton;
    
    cout<<"Input the amount of weight of one box of cereal in ounces:";
    cin>>crlonc;
    
    crlton = crlonc/35273.92;
    numbox = 35273.93/crlonc;
    cout<<"Your box of cereal weighs "<<crlton<<" metric tons."<<endl;
    cout<<"It will take "<<numbox<<" boxes of your cereal to create one metric ton";
    
            
    
    
    

    return 0;
}

