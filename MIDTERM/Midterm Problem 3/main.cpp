/*3)  Develop an application that will determine if a bank customer 
has exceeded his checking account. The following 
facts are available and input into the program:

a. Account number (Five digits only)
b. Balance at the beginning of the month 
c. Total of all checks written by this customer this month 
d. Total of all deposits credited to this customer's account this 
     month.

The program should input each of these facts as 
unsigned shorts, calculate the new balance, display the new balance and 
debit the account $27.75 if overdrawn. Also, if overdrawn, tell the 
customer an additional $27.75 fee has been accessed and what the 
balance whould be with this fee included.*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    //declare variables
    unsigned short blnce, chk, dep;
    float totAm;

    cout << "Enter your  PIN Number : "<<endl;
    string pinNum;    
    while(getline(cin,pinNum)&&pinNum.size()!= 5){
    cout << "Please enter a valid value\n";
    }
    cout<<"What is the balance at the beginning of the month? :"<<endl;
    cin>>blnce;
    cout<<"What is the total of all checks written this month? :"<<endl;
    cin>>chk;
    cout<<"What is the total of all deposits this month? :"<<endl;
    cin>>dep;
    //calculations
    totAm=blnce+dep-chk;
    if (totAm<0){
        cout<<"You have overdrawn your account. You will be charged an extra $27.75 this month."<<endl;
        cout<<"Your new balance this month is $"<<totAm-27.75<<endl;
    } else{
        cout<<"Your new balance this month is $"<<totAm<<endl;
    }
    system("PAUSE");
    return 0;
}
