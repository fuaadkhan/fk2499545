/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 7, 2014, 7:24 PM
 * Count the number of peas in all pods
 */

//System Libraries
#include <iostream>
using namespace std;

//Execution begins here!
int main() {
    int number_of_pods, peas_per_pod, total_peas;
    
    //Greet the user
    cout<<"Hello\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    
    //Replace the * with / for problem 3 in Savitch
    total_peas = number_of_pods/peas_per_pod;
    
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all pods.\n";
    
    //Say farewell to the user
    cout<<"Good-bye\n";

    return 0;
}
