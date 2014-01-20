/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 19, 2014, 3:15 PM
 * Savitch Chapter 3, Problem 3
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int day, month;
    string aries, taur, gem, can, leo, vir, lib, scor, sag, cap, aqua, pisces;
    
    aries = "Aries: You are going to have a good day.";
    taur = "Taurus: You are going to be lucky in the next few days.";
    gem = "Gemini: You will meet someone that was once close to you in your past.";
    can = "Cancer: There is only disappointment in your future.";
    leo = "Leo: Stay way from caged animals.";
    vir = "Virgo: Sorry, today isn't your day.";
    lib = "Libra: Everyone loves you, never change.";
    scor = "Scorpio: Take time and build some character. Only then will people start appreciating you for who you are.";
    sag = "Sagittarius: True love awaits you.";
    cap = "Capricorn: The color brown is in your future.";
    aqua = "Aquarius: Don't think twice of giving money to charity.";
    pisces = "Pisces: Never give up. You are almost there.";
    
    cout<<"Input the month you were born in numeric form. (1) being January to (12) Being December: "<<endl;
    cin>>month;
    cout<<"Input the Day you were born in. Enter a number from 1-31: "<<endl;
    cin>>day;
    
    do{
        if((month<1||month>12)||(day<1||day>31)){
            cout<<"Error: You input a month that does not exist, and/or a day that does not exist. Please try again."<<endl;
            cout<<"Input the month you were born in numeric form. (1) being January to (12) Being December: "<<endl;
            cin>>month;
            cout<<"Input the Day you were born in. Enter a number from 1-31: "<<endl;
            cin>>day;
        }
        
    }while (((month<1||month>12)||(day<1||day>31)));
    
    
    if (month==3&&day>=21||month==4&&day<20){
        cout<<aries<<endl;
    }else if (month==4&&day>=20||month==5&&day<21){
        cout<<taur<<endl;
    }else if (month==5&&day>=20||month==6&&day<22){
        cout<<gem<<endl;
    }else if (month==6&&day>=22||month==7&&day<23){
        cout<<can<<endl;
    }else if (month==7&&day>=23||month==8&&day<23){
        cout<<leo<<endl;
    }else if (month==8&&day>=23||month==9&&day<23){
        cout<<vir<<endl;
    }else if (month==9&&day>=23||month==10&&day<23){
        cout<<lib<<endl;
    }else if (month==10&&day>=23||month==11&&day<22){
        cout<<scor<<endl;
    }else if (month==11&&day>=22||month==12&&day<22){
        cout<<sag<<endl;
    }else if (month==12&&day>=22||month==1&&day<20){
        cout<<cap<<endl;
    }else if (month==1&&day>=20||month==2&&day<19){
        cout<<aqua<<endl;
    }else{
        cout<<pisces<<endl;
    }
    
    
    return 0;
}

