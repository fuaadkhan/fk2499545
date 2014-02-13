/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on February 3, 2014, 8:13 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Structures
struct MarkSort{
    int *data; 
    int size;
};
//Function Prototypes
void filAray(MarkSort *,MarkSort *, int);
void prntAry(MarkSort *,MarkSort *,int);
void prntAry(MarkSort *,int);
void swap(int &,int &);
void minPos(MarkSort *,MarkSort *,int, int);
void mrkSort(MarkSort *,MarkSort *);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    const int SIZE=200;
    int *array = new int[SIZE];
    int *index = new int[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Fill the arrays
    filAray(array,index,SIZE);
    //Print the arrays
    prntAry(array,index,SIZE,10);
    //Test out the min pos routine
    mrkSort(array,index,SIZE);
    //Print the array
    prntAry(array,index,SIZE,10);
    prntAry(index,SIZE,10);
    prntAry(array,SIZE,10);
    //Delete storage
    delete []array;
    delete []index;
    //Exit Stage Right!!!
    return 0;
}

void mrkSort(MarkSort *a,MarkSort *indx){
    for(int i=0;i<((a->size)-1);i++){
        minPos(a->size,indx->size,i);
    }
}

void minPos(MarkSort *a,MarkSort *indx,int pos){
    for(int i=pos+1;i<a->size;i++){
        if((a->indx->data[pos])>(a->indx->data[i]))
                swap(indx->data[pos],indx->data[i]);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(MarkSort *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(MarkSort *a,MarkSort *indx,int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->(indx->data[i])<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(MarkSort *a,MarkSort *indx){
    for(int i=0;i<a->size;i++){
        a->data[i]=rand()%90+10;
        indx->data[i]=i;
    }
}

