/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 13, 2014, 8:22 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float preSal, pmSal, posSal, nAnnsal, nMonsal, payIn;
    payIn = 0.076;
    
    cout<<"Input your previous annual salary:"<<endl;
    cin>>preSal;
    
    pmSal = preSal/12;
    nMonsal = (pmSal*payIn)*6;
    nAnnsal = ((pmSal*6)+nMonsal);
    
    cout<<"The new monthly salary is "<<nMonsal<<endl;
    cout<<"The new annual salary is "<<nAnnsal<<endl;
    

    return 0;
}

