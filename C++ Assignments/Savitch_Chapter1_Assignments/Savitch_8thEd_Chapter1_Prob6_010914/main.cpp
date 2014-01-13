/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * January 9, 2014
 * Savitch Chapter 1 Problem 6
 * Create and record errors
 */

//main.cpp:12:21: fatal error:  iostream: No such file or directory
//#include < iostream
//main.cpp:15:10: error: #include expects "FILENAME" or <FILENAME>
///main.cpp: In function ‘int main(int, char**)’:
//main.cpp:25:5: error: ‘cout’ was not declared in this scope
//main.cpp:25:39: error: ‘endl’ was not declared in this scope
//main.cpp:26:5: error: ‘cin’ was not declared in this scope
//#include iostream>
#include <iostream>
using namespace std;

//No error detected without int infront of main
//main(int argc, char** argv) {
//int mein(int argc, char** argv) {
//main.cpp:33:10: error: expected initializer before ‘)’ token
//int main ) {
int main (){
    //Declare all variables
    int nPods;//number_of_pods, 
    int pPerPod;//Peas per pod
    int totPeas;//Total peas;
    //Input the knowns
    //main.cpp:41:5: error: ‘cut’ was not declared in this scope
    //cut<<"Input the number of pods"<<endl;
    cout<<"Input the number of pods"<<endl;
    cin>>nPods;
    cout<<"You input "<<nPods<<endl;
    cout<<"Input the number of peas per pod"<<endl;
    cin>>pPerPod;
    cout<<"You input "<<pPerPod<<endl;
    //Calculate how many peas total
    totPeas=nPods*pPerPod;
    cout<<"The total number of peas = "<<totPeas;
    //Exit
    return 0;
    //main.cpp:53:13: error: expected ‘}’ at end of input
}


