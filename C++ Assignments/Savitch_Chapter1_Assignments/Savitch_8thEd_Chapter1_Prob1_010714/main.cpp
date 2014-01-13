/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 7, 2014, 7:05 PM
 * Count the number of peas in all pods
 * Savitch Chapter 1, Problem 1
 */

//System Libraries
#include <iostream>
using namespace std;

//Execution begins here!
int main() {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas = number_of_pods*peas_per_pod;
    
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all pods.\n";
    
    return 0;
}

