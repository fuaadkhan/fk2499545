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
using namespace std;

//Global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //declare variables
     int a[5], number;
 cout<<"Enter number"<<endl;    
 cin>>number;
 for (int i = number; i<5; i++)
 {
  cout << a[i] << "             ";
  for (int k = 0; k<a[number]; k++)
   cout << "*";

  cout << endl;
 }
 system("PAUSE");
    return 0;
}

