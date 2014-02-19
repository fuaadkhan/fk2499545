/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on February 19, 2014, 1:35 PM
 * Bubble Sort and Binary Search using pointer notation 
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Function Prototypes
int *fillArray(const int);
void prntArray(int *,const int,int);
void bubbleSort(int *,const int);
void swapI(int &,int &);
int binSearch(int *,const int,int);

int main(int argc, char** argv) {
    //Declare Variables and set seed
    const int SIZE = 100;
    srand(static_cast<unsigned int>(time(0)));
    //Fill Array
    int *array = fillArray(SIZE);
    //Print unsorted array
    prntArray(array, SIZE, 10);
    //Sort Array
    bubbleSort(array,SIZE);
    //Print Sorted Array
    cout<<endl<<endl;
    prntArray(array,SIZE,10);
    //Prompt for user input
    cout<<endl<<endl;
    int inP;
    cout<<"Enter a 2-digit value you would like to search for: ";
    cin>>inP;
    //Search for value and output index in array
    int outP = binSearch(array,SIZE,inP);
    if(outP == -1){
        cout<<inP<<" is not found in this array"<<endl;
    }else{
        cout<<inP<<" is located at position: "<<outP<<endl;    
    }
    //Clean up    
    delete []array;
    return 0;
}

int *fillArray(const int SIZE){
    int *array = new int[SIZE];
    for(int i = 0; i < SIZE; i++){
        *(array+i) = rand()%90+10;        
    }
    return array;
}

void prntArray(int *a,const int SIZE,int nL){
    for(int i = 0; i < SIZE; i++){
        cout<<*(a+i)<<" ";
        if(i%nL == nL-1){
            cout<<endl;
        }
    }
}

void bubbleSort(int *a, const int SIZE){
    bool loop;
    do{
        loop = false;
        for(int i = 0; i < SIZE-1; i++){
            if(*(a+i) > *(a+(i+1))){
                swapI(*(a+i),*(a+(i+1)));
                loop = true;
            }
        }
    }while(loop);
}

void swapI(int &n1,int &n2){
    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;
}

int binSearch(int *a,const int SIZE,int val){
    bool found = false;
    int fir = 0;
    int last = SIZE-1;
    int mid;
    int pos = -1;
    while(!found && fir<=last){
        mid = (fir+last)/2;
        if(*(a+mid) > val){
            last = mid-1;
        }else if(*(a+mid) < val){
            fir = mid+1;
        }else{
            pos = mid;
            found = true;
        }
    }
    return pos;
}