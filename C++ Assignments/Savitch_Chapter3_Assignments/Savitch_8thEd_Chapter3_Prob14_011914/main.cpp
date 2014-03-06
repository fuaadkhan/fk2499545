/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 19, 2014, 2:30 PM
 * Savitch Chapter 3, Problem 14
 * Find all the prime numbers between 3 and 100
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Finds all the prime numbers from 3-100
    for (int i=2; i<100; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
                cout << i << " ";

        } 

    return 0;
}

