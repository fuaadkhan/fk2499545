/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on February 3, 2014, 8:13 AM
 * Selection Sort timings
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
void SelSort(int [], int);


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
    SelSort(brray, SIZE);
    int endTime=time(0);
    cout<<"Total Time Taken for Selection Sort= "<<endTime-strTime
            <<" secs"<<endl;
    //Print the array
    //prntAry(brray,SIZE,10);
    //Exit Stage Right!!!
    return 0;
}


void SelSort(int a[], int n){
    int minIn, minVal;
    for(int i=0;i<n-1;i++){
        minIn=i;
        minVal=a[i];
        for(int index=i+1;index<n;index++){
            if(a[index]<minVal){
                minVal=a[index];
                minIn=index;
            }
        }
    a[minIn]=a[i];
    a[i]=minVal;
    }
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

