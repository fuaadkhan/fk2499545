/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on February 19, 2014, 1:34 PM
 * Assignment 1 Bubble sort and 
 * Binary sort in Pointer Notation
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],const int);
void printAry(int [],int,int);
void sortArray(int [], int);
//Constructs

//Execution Begins Here
int main(int argc, char** argv) {
    const int SIZE=100;
    int bubble[SIZE];
    //Time
    srand(static_cast<unsigned int>(time(0)));
    filAray(bubble ,SIZE);
    printAry(bubble, SIZE, 10);
    sortArray(bubble, SIZE);
    printAry(bubble, SIZE, 10);
    
    return 0;
}

void sortArray(int array[], int size){
    bool swap;
    int temp;
    do{
        swap=false;
        for(int count=0;count<(size-1);count++){
            if(array[count]>array[count+1]){
                temp=array[count];
                array[count]=array[count+1];
                array[count+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}

void filAray(int a[],const int s){
    //Fill the Array
    for(int i=0;i<s;i++){
        a[i]=rand()%90+10;
    }
}

void printAry(int a[],int n,int line){
    cout<<endl;
    //Print the Array
    for(int i=0;i<n;i++){
        cout<<setw(2)<<a[i]<<" ";
        if(i%line==(line-1))cout<<endl;
    }
    cout<<endl;
}