/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 29, 2014, 5:48 PM
 * 4)  Develop an application that will determine the gross pay for 
employees. The company pays "straight-time" for the 
first 20 hours worked, double time for all hours worked in 
excess of 20 hours but less than 40 hours, and triple time for any 
hours worked over 40 hours. Inputs to the program would be hours
worked and rate of pay.  Output would be gross pay.
 */

//system Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float hours, hourst, ratPay, grosPay;
    char resp;
    //Input hours worked and rate of pay.
    do{
        
    
    cout<<"How many hours has the employee worked? :"<<endl;
    cin>>hours;
    cout<<"What is the rate of pay per hour? :"<<endl;
    cin>>ratPay;
    
    if (hours>20&&hours<40){
        grosPay=(20*ratPay)+((hours-20)*(2*ratPay));
        cout<<"the gross pay for this employee is $"<<grosPay<<endl;
    } else if (hours>40){
        hourst= (hours-40);
        grosPay=(20*ratPay)+(20*(2*ratPay))+((hours-40)*(3*ratPay));
        cout<<"the gross pay for this employee is $"<<grosPay<<endl;
    } else{
        grosPay=hours*ratPay;
        cout<<"the gross pay for this employee is $"<<grosPay<<endl;
    }
    cout<<"Would you like to try again? (Y/N)"<<endl;
    cin>>resp;
            
    } while( resp=='Y'||resp=='y');
    return 0;
}

