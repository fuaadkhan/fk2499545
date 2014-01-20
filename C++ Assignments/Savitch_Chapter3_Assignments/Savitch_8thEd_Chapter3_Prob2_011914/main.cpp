/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 19, 2014, 11:13 
 * Savitch Chapter 3, Problem 2
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float CNV_PERC=100;
//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float intDue, totAmnt, minPay, blnce;
    
    //Input the total balance
    cout<<"Input the total balance :"<<endl;
    cin>>blnce;
    
    //Calculations
    if (blnce >= 1000){
        intDue = (1.5/CNV_PERC)*blnce;
        totAmnt = blnce+intDue;
    }else{
        intDue = (1/CNV_PERC)*blnce;
        totAmnt = blnce+intDue;
    }
    if (totAmnt<=10){
        minPay=totAmnt;
    }else{
        minPay=totAmnt*0.1;
    }
    
    cout<<"Your total amount due is :"<<totAmnt<<endl;
    cout<<"Your minimum payment is :"<<minPay<<endl;

    return 0;
}

