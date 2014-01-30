/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 29, 2014, 7:38 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float hours, paymnt, payment;
    char option;
    
    cout<<"Enter package A, B, or C :"<<endl;
    cin>>option;
    cout<<"Enter the number of hours of access you have used :"<<endl;
    cin>>hours;
    
    switch (toupper(option)){
        case 'A':
            
            if(hours>11&&hours<=22){
                paymnt=((hours-11)*2.75)+29.95;
                cout<<"Your total charge this month is $"<<paymnt<<endl;
            }else if(hours>22){
                paymnt=(hours-11)*2.75;
                payment=((hours-22)*5)+paymnt+29.95;
                cout<<"Your total charge this month is $"<<payment<<endl;
            }else{
                cout<<"Your total charge this month is $29.95"<<endl;
            }
            break;
            
        case'B':
            if (hours>22&&hours<=33){
                paymnt=((hours-22)*1.5)+34.95;
                cout<<"Your total charge this month is $"<<paymnt<<endl;
            }else if(hours>33){
                paymnt=((hours-22)*1.5);
                payment=((hours-33)*2.5)+paymnt+34.95;
                cout<<"Your total charge this month is $"<<payment<<endl;
            }else{
                cout<<"Your total charge this month is $34.95 "<<endl; 
            }
            break;
        case'C':
            cout<<"Your total charge this month is $39.75 "<<endl;
            break;
        default:
            cout<<"You did not enter a valid package"<<endl;
    }
        
    return 0;
}

