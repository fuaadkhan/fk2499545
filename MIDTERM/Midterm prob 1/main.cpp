/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 28, 2014, 9:47 AM
 * Midterm problem 1
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int i, k, n;
    string resp="y";
    do{
    //Input number of rows
    cout<<"Input the number of rows: "<<endl;
    cin>>n;
    for(i =1; i<=n+1; i++){
    for(k =1; k<i; k++){
    if(k <i-1)cout<<" ";
    else cout<<k<<endl;
    }
    }
    cout<<"Would you like to try again? (y/n) :"<<endl;
    cin>>resp;
    }while (resp=="y"||"Y");
    //Exit Stage Right
    return 0;
}
