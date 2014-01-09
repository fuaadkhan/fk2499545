/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 7, 2014, 7:46 PM
 * Give the sum and product of two given integers
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare Variables
    int firstn, secondn, tsum, tprod;
    
    cout<<"Press enter after entering a number.\n";
    cout<<"Enter the first number: \n";
    cin>>firstn;
    cout<<"Enter the second number: \n";
    cin>>secondn;
    
    tsum = firstn+secondn;
    tprod = firstn*secondn;
    
    cout<<"The sum of your two numbers is ";
    cout<<tsum;
    cout<<".\n";
    cout<<"the product of your two numbers is ";
    cout<<tprod;
    cout<<".\n";
    
    return 0;
}

