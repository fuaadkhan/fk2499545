/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 28, 2014, 9:19 PM
 * 2)  One interesting application of computers is drawing graphs and 
bar charts (sometimes called "histograms"). Write an application that 
reads up to 5 numbers (each between 3 and 27). For each number entered, 
your program should draw a line containing that number of adjacent 
asterisks. For example, if your program reads the number seven, it 
should print *******.  
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //declare variables
    const int Length = 5;
   float arr[Length]={}, x;
   int i, cnt;
   
   
   
   cout << "Enter up to 5 numbers \n"
        << "(Quit with a letter):" << endl;
   for( i = 0; i < Length  &&  cin >> x; ++i)
      arr[i] = x;
   cnt = i;
 for (int i = 0; i<5; i++)
 {
  cout << arr[i] << "             ";
  for (int k = 0; k<arr[i]; k++)
   cout << "*";

  cout << endl;
 }
   
    return 0;
}

