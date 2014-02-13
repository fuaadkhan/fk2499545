/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on February 3, 2014, 8:13 AM
 * Bubble Sort timings
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
void xcopy(const int [],int [],int);
void bblSort(int [], int);


//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    const int SIZE= 100000;
    int array[SIZE],brray[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Fill the arrays
    filAray(array,SIZE);
    xcopy(array,brray,SIZE);
    //Print the array
    //prntAry(array,SIZE,10);
    //Test out the min pos routine
    int strTime=time(0);
    bblSort(brray, SIZE);
    int endTime=time(0);
    cout<<"Total Time Taken for Bubble Sort= "<<endTime-strTime
            <<" secs"<<endl;
    //Print the array
    //prntAry(brray,SIZE,10);
    //Exit Stage Right!!!
    return 0;
}


void bblSort(int a[], int n){
    bool swap;
    int temp;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}

void xcopy(const int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}


void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}