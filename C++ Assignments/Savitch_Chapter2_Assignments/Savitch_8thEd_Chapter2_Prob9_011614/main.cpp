/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 16, 2014, 8:42 AM
 * Savitch Chapter 2, Problem 9
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int CNV_YR_MNS= 12; // 12 months per year
const int CNV_PERC = 100; // convert percentage

//Function prototype

//Execuction begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float price, intrst, paymnt, prin=0, owed, intpay, mpay=0;
    
    //Input price, payment, and yearly interest rate
    cout<<"Input the price of item in dollars :"<<endl;
    cin>>price;
    cout<<"Input the finance rate in percentage :"<<endl;
    cin>>intrst;
    cout<<"Input monthly payment in dollars: "<<endl;
    cin>>paymnt;
    
    //Convert and setup heading
    intrst/=(CNV_PERC*CNV_YR_MNS);
    owed=price;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Month   Owed   Interest   Payment   Principal"<<endl;
    //loop on months until paid
    for(int month=0;owed>paymnt;month++){
    owed-=(mpay-intpay);
    mpay=paymnt;
    intpay=owed*intrst;
    prin=paymnt-intpay;
    cout<<month<<setw(12)<<owed<<setw(11)<<intpay<<setw(9)<<paymnt<<setw(10)<<prin<<endl;
    
    
    }
    //Final payment calculation
    cout<<"Your final payment = "<<owed+intpay<<endl;
    return 0;
}

