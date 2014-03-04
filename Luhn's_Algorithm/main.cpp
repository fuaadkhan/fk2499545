/* 
 * File:   main.cpp
 * Author: Fuaad
 * Created on March 1, 2014, 11:28 AM
 * Luhn's Algorithm
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function prototypes
string input();
bool Num(string);
bool luhnChk(string);

//Execution begins here!
int main(int argc, char** argv) {
    string accNum;
    
    //Loop until input is Valid
    do{
        //Get Input
        accNum = input();    
    }while(!luhnChk(accNum));

    cout<<endl<<"Your account number is valid.";
    //Exit Stage Right
    return 0;
}

//Get User input and output as string
string input(){
    string acc;
    do{
        cout<<"Please enter your account number: ";
        getline(cin,acc);
    }while(!Num(acc));
    return acc;
}
bool Num(string a){
    //Check input to make sure that the account number is 11 digits
    if(a.length()!=11){
        cout<<"ERROR: Your account Number should be 11 Digits."<<endl;
        return false;
    }
    
    //Check input to make sure they are numbers
    for(int i=0; i<a.length();i++){
        if(((a[i]-'0')<0)||((a[i]-'0')>9)){
            cout<<"ERROR: Please input only numbers."<<endl;
            return false;
        }    
    }
    return true;
}
bool luhnChk(string a){
    int sum=0;
    int temp=0;
    
//Get the sum
    for(int i=0;i<(a.length()-1);i++){
        //If Odd then double that element
        if(i%2)
            temp = (a[i]-'0')*2;
        //If Even then don't double that element
        else
            temp = (a[i]-'0');
        //If the doubling puts the element over 9 add the two digits together
        if(temp>=10)
            temp = 1+(temp%10);
        //Add result to sum
        sum += temp;
    }
    
//check (sum*9)%10 against the 11th digit
    if((a[a.length()-1]-'0')==(sum*9)%10)
        return true;
    else{
        cout<<"ERROR: Your account number failed the check sum."<<endl;
        return false;
    }
}