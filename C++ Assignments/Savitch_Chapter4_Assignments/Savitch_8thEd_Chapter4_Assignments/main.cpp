//Fuaad Khan
//January 27th, 2014
//Menu for Savitch Chapter 4 Assignments

//Library includes Here!!!
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants Here!!!
const int CNV_PERC = 100; //conversion to percentage
const unsigned char CNV_MIN_HRS = 60; //minutes in an hour
const unsigned char CNV_24HR = 12; // 24-hr clock
const float CNV_L_GAL=0.264179;
//Function Prototypes Here!!!
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        case 8:    problem8();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=8);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Savitch Chapter 4"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 9"<<endl;
    cout<<"Type 7 for problem 10"<<endl;
    cout<<"Type 8 for problem 16"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

//*********************** PROBLEM 1 ***************************
void problem1(){
        cout<<"In problem # 1"<<endl<<endl;
        
        const float CNV_L_GAL=0.264179;
        float mpg0(float, float, float);
        //Declare variables
    float lit, miles, mpg;
    string resp = "y";
    
    do{
    //Input liters of gasoline, and miles
    cout<<"How many liters of gasoline?"<<endl;
    cin >>lit;
    cout<<"How many miles driven?"<<endl;
    cin>>miles;
    //Call function mpg1
    cout<<"You are getting "<<mpg0(lit, miles, mpg)<<" miles per gallon."<<endl;
    cout<<"Would you like to repeat this process (y/n)?"<<endl;
    cin>>resp;
    } while (resp == "y");
}

float mpg0(float lit, float miles, float mpg){
    mpg = miles/(lit*CNV_L_GAL);
    return mpg;
}

//*********************** PROBLEM 2 ***************************
void problem2(){
        cout<<"In problem # 2"<<endl<<endl;
        
float mpg1(float, float, float);
float mpg2(float, float, float);
        float lit, litT, miles, milesT, mpg, mpgT;
    string resp = "y";
    
    do{
    //Input liters of gasoline, and miles for first car
    cout<<"How many liters of gasoline in car No.1?"<<endl;
    cin >>lit;
    cout<<"How many miles driven in car No.1?"<<endl;
    cin>>miles;
    //Input liters of gasoline, and miles for second car
    cout<<"How many liters of gasoline in car No.1?"<<endl;
    cin >>litT;
    cout<<"How many miles driven in car No.1?"<<endl;
    cin>>milesT;
    //Call function mpg1 and mpg2
    cout<<"The first car is getting "<<mpg1(lit, miles, mpg)<<" miles per gallon."<<endl;
    cout<<"The second car is getting "<<mpg2(litT ,milesT, mpgT)<<" miles per gallon."<<endl;
    cout<<endl;
    
    if (mpg1(lit, miles, mpg)>mpg2(litT ,milesT, mpgT)){
        cout<<"The first car has better fuel efficiency"<<endl;
    }else if (mpg1(lit, miles, mpg)<mpg2(litT ,milesT, mpgT)){
        cout<<"The second car has better fuel efficiency"<<endl;
    }else{
        cout<<"Both cars have the same fuel efficiency"<<endl;
    }
    
    cout<<"Would you like to repeat this process (y/n)?"<<endl;
    cin>>resp;
    } while (resp == "y");
}

float mpg1(float lit, float miles, float mpg){
    const float CNV_L_GAL=0.264179;
    mpg = miles/(lit*CNV_L_GAL);
    return mpg;
}

float mpg2(float litT, float milesT, float mpgT){
    const float CNV_L_GAL=0.264179;
    mpgT = milesT/(litT*CNV_L_GAL);
    return mpgT;
}
     

//*********************** PROBLEM 3 ***************************
void problem3(){
        cout<<"In problem # 3"<<endl<<endl;
        
void read(int &,int &,int &);
float cnvrt(int,int,int);

        int whole,num,den;
    float result;
    //Read the data
    read(whole,num,den);
    //Convert
    result=cnvrt(whole,num,den);
    //Format the output
    cout<<setprecision(3)<<fixed<<showpoint;
    cout<<"$"<<result<<endl;
    //Exit Stage Right
}

float cnvrt(int whole,int num,int den){
    return whole+1.0f*num/den;
}

void read(int &whole,int &num,int &den){
    //Declare the / symbol
    char slash;
    //Prompt for inputs
    cout<<"Input stock price as xxx x/x"<<endl;
    cin>>whole>>setw(2)>>num>>slash>>den;
}

//*********************** PROBLEM 4 ***************************
void problem4(){
        cout<<"In problem # 4"<<endl<<endl;
 
float inRa1 (float, float, float);
        float itmOl, itmNew, infl;
    string loop = "y";
   
    do{
        
    //Input price of the item a year ago and now
    cout<<"What was the price of the item a year ago in $'s? :"<<endl;
    cin>>itmOl;
    cout<<"What is the price of the same item today in $'s? :"<<endl;
    cin>>itmNew;
    //Call function
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The inflation rate for this item in one year is :"<<inRa1(itmOl,itmNew,infl)<<"%"<<endl;
    cout<<endl;
    cout<<"Would you like to try again? (y/n)"<<endl;
    cin>>loop;
    
    } while (loop == "y");
}

float inRa1 (float itmOl, float itmNew, float infl){
    infl=((itmNew-itmOl)/itmOl)*CNV_PERC;
    return infl;
}

//*********************** PROBLEM 5 ***************************
void problem5(){
        cout<<"In problem # 5"<<endl<<endl;
        
        float inRa (float &, float &, float &);
        float itmOl, itmNew, infl, itmOlt, itmNewt, inflt ;
    string loop = "y";
   
    do{
        
    //Input price of the item a year ago and now
    cout<<"What was the price of the item a year ago in $'s? :"<<endl;
    cin>>itmOl;
    cout<<"What is the price of the same item today in $'s? :"<<endl;
    cin>>itmNew;
    //Call function
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The inflation rate for this item in one year is :"<<inRa(itmOl,itmNew,infl)<<"%"<<endl;
    cout<<endl;
    //Calculate
    inflt=itmNew*infl;
    cout<<"the price of this item in one year is :"<<inflt<<endl;
            
    cout<<"Would you like to try again? (y/n)"<<endl;
    cin>>loop;
    
    } while (loop == "y");
}


float inRa (float &itmOl, float &itmNew, float &infl){
    infl=((itmNew-itmOl)/itmOl)*CNV_PERC;
    return infl;
    
}

//*********************** PROBLEM 9 ***************************
void problem6(){
        cout<<"In problem # 9"<<endl<<endl;
        
float hs0(float, float, float);
float cs0(float, float, float, int);
float wIn0(float, float, float, int);
        float hght, wght, hSize, jack, waist;
    int age;
    string resp = "y";
    
    do{
        
    //Input height, weight, and age
    cout<<"Input height in feet:"<<endl;
    cin>>hght;
    cout<<"Input weight in lbs.:"<<endl;
    cin>>wght;
    cout<<"Input your age:"<<endl;
    cin>>age;
    
    //Call function for hat size
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Your hat size is : "<<hs0(hSize,hght,wght)<<endl;
    cout<<"Your Jacket size is : "<<cs0(jack,hght,wght,age)<<endl;
    cout<<"Your Waist size is : "<<wIn0(waist, hght, wght, age)<<endl;
    cout<<endl;
    cout<<"would you like to try again? (y/n)"<<endl;
    cin>>resp;
    } while (resp == "y");
}

float hs0(float hSize, float hght, float wght){
    hSize = ((wght/hght)*2.9)/12;
    return hSize;
}

float cs0(float jack, float hght, float wght, int age){
    jack = ((hght*12)*wght)/288;
    if (age>30){
        jack = ((hght*12)*wght)/288 + (age % 30)*1.5;
    }
    return jack;
}

float wIn0(float waist, float hght, float wght, int age){
    waist = (wght/5.7);
    if (age>28){
        waist = (wght/5.7) + ((age-28)/2)*1.2;
    }
    return waist;
}

//*********************** PROBLEM 10 ***************************
void problem7(){
        cout<<"In problem # 10"<<endl<<endl;
        
float hs(float, float, float);
float cs(float, float, float, int);
float cs2(float, float, float, int);
float wIn(float, float, float, int);
        float hght, wght, hSize, jack, waist;
    int age;
    string resp = "y";
    
    do{
        
    //Input height, weight, and age
    cout<<"Input height in feet:"<<endl;
    cin>>hght;
    cout<<"Input weight in lbs.:"<<endl;
    cin>>wght;
    cout<<"Input your age:"<<endl;
    cin>>age;
    
    //Call function for hat size
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Your hat size is : "<<hs(hSize,hght,wght)<<endl;
    cout<<"Your Jacket size is : "<<cs(jack,hght,wght,age)<<endl;
    cout<<"Your Jacket size is in 10 years is : "<<cs2(jack,hght,wght,age)<<endl;
    cout<<"Your Waist size is : "<<wIn(waist, hght, wght, age)<<endl;
    cout<<endl;
    cout<<"would you like to try again? (y/n)"<<endl;
    cin>>resp;
    } while (resp == "y");
    
}

float hs(float hSize, float hght, float wght){
    hSize = ((wght/hght)*2.9)/12;
    return hSize;
}

float cs2(float jack, float hght, float wght, int age){
    age = age+10;
    jack = ((hght*12)*wght)/288;
    if (age>30){
        jack = ((hght*12)*wght)/288 + (age % 30)*1.5;
    }
    return jack;
}

float cs(float jack, float hght, float wght, int age){
    jack = ((hght*12)*wght)/288;
    if (age>30){
        jack = ((hght*12)*wght)/288 + (age % 30)*1.5;
    }
    return jack;
}

float wIn(float waist, float hght, float wght, int age){
    waist = (wght/5.7);
    if (age>28){
        waist = (wght/5.7) + ((age-28)/2)*1.2;
    }
}

//*********************** PROBLEM 16 ***************************
void problem8(){
        cout<<"In problem # 16"<<endl<<endl;
        
void read(unsigned short &, unsigned short &, char &);
unsigned short minute(unsigned short, unsigned short, char);
unsigned short diff(unsigned short, unsigned short);
        unsigned short shr, ehr, smin, emin, scmin, ecmin, diffmin;
    char sampm, eampm;
    //Read the data
    read (shr,smin,sampm);
    read (ehr,emin,eampm);
    
    //Convert to minutes
    scmin=minute(shr,smin,sampm);
    ecmin=minute(ehr,emin,eampm);
   // cout<<"starting minutes : "<<scmin<<endl;
    //cout<<"ending minutes : "<<ecmin<<endl;
    //what is the difference in minutes
    diffmin=diff(scmin, ecmin);
    cout<<"the difference in minutes = "<<diffmin<<endl;
    //Exit stage right
}

unsigned short diff(unsigned short strt, unsigned short stp){
    short min=stp-strt;
    return (min>=0)?min:(min+2*CNV_24HR*CNV_MIN_HRS);
}

unsigned short minute(unsigned short hr, unsigned short min, char ampm){
    hr+=(ampm=='p'&&hr!=CNV_24HR)?CNV_24HR:0;
    hr-=(ampm=='a'&&hr==CNV_24HR)?CNV_24HR:0;
    return hr*CNV_MIN_HRS+min;
}

void read(unsigned short &hr, unsigned short &min, char &ampm){
    char dum;
    cout<<"Input a time :"<<endl;
    cout<<"Format XX:XX am/pm"<<endl;
    cin>>setw(2)>>hr>>dum>>min>>setw(2)>>ampm>>dum;
    //cout<<"You input the following : "<<endl;
    //cout<<"the hour = "<<hr<<endl;
    //cout<<"the minute = "<<min<<endl;
   // cout<<"AM/PM = "<<ampm<<"m"<<endl;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}