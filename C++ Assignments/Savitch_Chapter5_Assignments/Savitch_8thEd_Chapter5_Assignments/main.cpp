//Fuaad Khan
//January 14th, 2014
//Menu for Savitch Chapter 5 Assignments

//Library includes Here!!!
#include <iostream>
#include<iomanip>
using namespace std;

//Global Constants Here!!!

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
    cout<<"Menu for Savitch Chapter 5"<<endl;
    cout<<"Type 1 for problem 6"<<endl;
    cout<<"Type 2 for problem 7"<<endl;
    cout<<"Type 3 for problem 8"<<endl;
    cout<<"Type 4 for problem 9"<<endl;
    cout<<"Type 5 for problem 10"<<endl;
    cout<<"Type 6 for problem 11"<<endl;
    cout<<"Type 7 for problem 12"<<endl;
    cout<<"Type 8 for problem 14"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

//************************** PROBLEM 6 ********************************
void problem1(){
        cout<<"In problem # 6"<<endl<<endl;

void inputA (float&, float&);
void convA(float &feet, float &inches);
void outputA (float met, float cent); 
    float feet;
    float inches;

    inputA(feet, inches);
    convA(feet, inches);
    outputA (feet, inches);
}

void inputA (float &feet, float &inches){
    cout << "Please enter a length in feet " << endl;
    cin >> feet;
    cout << "Please enter a length in inches" << endl;
    cin >> inches;
}
 
void convA (float &feet, float &inches){
     feet *= 0.3048;
     inches = feet*12;
}
 
void outputA (float met, float cent){
    cout << met << " meters and " << cent << "cm " << endl;
}

//************************** PROBLEM 7 ********************************
void problem2(){
        cout<<"In problem # 7"<<endl<<endl;
       
void inputB (float&, float&);
void convB(float &meter, float &cent);
void outputB (float feet, float inches);
    float meter;
    float cent;

    inputB(meter, cent);
    convB(meter, cent);
    outputB (meter, cent);
}

void inputB (float &meter, float &cent){
    cout << "Please enter a length in meters " << endl;
    cin >> meter;
    cout << "Please enter a length in centimeters " << endl;
    cin >> cent;
}
 
void convB (float &meter, float &cent){
     meter *= 3.28084;
     cent = meter*12;
}
 
void outputB (float feet, float inches){
    cout << feet << " feet and " << inches << "in " << endl;
}

//************************** PROBLEM 8 ********************************
void problem3(){
        cout<<"In problem # 8"<<endl<<endl;
    
void inputC (float&, float&);
void convC(float &feet, float &inches);
void outputC (float met, float cent);
void input2C (float&, float&);
void conv2C(float &meter, float &cent);
void output2C (float feet, float inches);  
    float feet, inches, meter, cent;
    int resp;
    cout<<"If you would like to convert from feet to meters enter 1"<<endl;
    cout<<"If you would like to convert from meters to feet enter 2"<<endl;
    cin>>resp;
    
    do{
    cout<<"ERROR: You did not enter either 1 or 2. Please try again."<<endl;
    cout<<"If you would like to convert from feet to meters enter 1"<<endl;
    cout<<"If you would like to convert from meters to feet enter 2"<<endl;
    cin>>resp;
    
    }while (resp!=1&&resp!=2);
    
    if (resp == 1){
    inputC(feet, inches);
    convC(feet, inches);
    outputC (feet, inches);
    } else if (resp == 2){
     input2C(feet, inches);
     conv2C(feet, inches);
     output2C (feet, inches);
    }
}

void inputC (float &feet, float &inches){
    cout << "Please enter a length in feet " << endl;
    cin >> feet;
    cout << "Please enter a length in inches" << endl;
    cin >> inches;
}
 
void convC (float &feet, float &inches){
     feet *= 0.3048;
     inches *= 2.54;
}
 
void outputC (float met, float cent){
    cout << met << " meters and " << cent << "cm " << endl;
}

void input2C (float &meter, float &cent){
    cout << "Please enter a length in meters " << endl;
    cin >> meter;
    cout << "Please enter a length in centimeters " << endl;
    cin >> cent;
}
 
void conv2C (float &meter, float &cent){
     meter *= 3.28084;
     cent = meter*12;
}
 
void output2C (float feet, float inches){
    cout << feet << " feet and " << inches << "in " << endl;
}

//************************** PROBLEM 9 ********************************
void problem4(){
        cout<<"In problem # 9"<<endl<<endl;
        
void inputD (float&, float&);
void convD(float &pound, float &ounces);
void outputD (float kgrams, float grams);  
    float pound;
    float ounces;

    inputD(pound, ounces);
    convD(pound, ounces);
    outputD (pound, ounces);
}

void inputD (float &pound, float &ounces){
    cout << "Please enter a weight in pound " << endl;
    cin >> pound;
    cout << "Please enter a weight in ounces" << endl;
    cin >> ounces;
}
 
void convD (float &pound, float &ounces){
     pound *= 0.453592;
     ounces = pound*16;
}
 
void outputD (float kgrams, float grams){
    cout << kgrams << " kilograms and " << grams << "grams " << endl;
}

//************************** PROBLEM 10 ********************************
void problem5(){
        cout<<"In problem # 10"<<endl<<endl;
        
void inputF (float&, float&);
void convF(float &kgrams, float &grams);
void outputF (float pound, float ounces); 
        float kgrams, grams, pound, ounces;

    inputF(kgrams, grams);
    convF(kgrams, grams);
    outputF (kgrams, grams);
}

void inputF (float &kgrams, float &grams){
    cout << "Please enter a weight in kilograms " << endl;
    cin >> kgrams;
    cout << "Please enter a weight in grams" << endl;
    cin >> grams;
}
 
void convF (float &kgrams, float &grams){
     kgrams *= 2.2046;
     grams = kgrams*.001;
}
 
void outputF (float pound, float ounces){
    cout << pound << " pounds and " << ounces << " ounces " << endl;
}

//************************** PROBLEM 11 ********************************
void problem6(){
        cout<<"In problem # 11"<<endl<<endl;
        
void inputG (float&, float&);
void convG(float &pound, float &ounces);
void outputG (float kgrams, float grams);
void input2G (float&, float&);
void conv2G(float &kgrams, float &grams);
void output2G (float pound, float ounces); 
        float pound, ounces, kgrams, grams;
    int resp;
    cout<<"If you would like to convert from pounds to kilograms enter 1"<<endl;
    cout<<"If you would like to convert from kilograms to pounds enter 2"<<endl;
    cin>>resp;
    
    do{
    cout<<"ERROR: You did not enter either 1 or 2. Please try again."<<endl;
    cout<<"If you would like to convert from pounds to kilograms enter 1"<<endl;
    cout<<"If you would like to convert from kilograms to pounds enter 2"<<endl;
    cin>>resp;
    
    }while (resp!=1&&resp!=2);

    if (resp == 1){
    inputG(pound, ounces);
    convG(pound, ounces);
    outputG (pound, ounces);
    } else if (resp == 2){
    input2G(pound, ounces);
    conv2G(pound, ounces);
    output2G (pound, ounces);
    }
}

void inputG (float &pound, float &ounces){
    cout << "Please enter a weight in pound " << endl;
    cin >> pound;
    cout << "Please enter a weight in ounces" << endl;
    cin >> ounces;
}
 
void convG (float &pound, float &ounces){
     pound *= 0.453592;
     ounces = pound*16;
}
 
void outputG (float kgrams, float grams){
    cout << kgrams << " kilograms and " << grams << "grams " << endl;
}

void input2G (float &kgrams, float &grams){
    cout << "Please enter a weight in kilograms " << endl;
    cin >> kgrams;
    cout << "Please enter a weight in grams" << endl;
    cin >> grams;
}
 
void conv2G (float &kgrams, float &grams){
     kgrams *= 2.2046;
     grams = kgrams*.001;
}
 
void output2G (float pound, float ounces){
    cout << pound << " pounds and " << ounces << " ounces " << endl;
}

//************************** PROBLEM 12 ********************************
void problem7(){
        cout<<"In problem # 12"<<endl<<endl;
        
void inputH (float&, float&);
void convH(float &feet, float &inches);
void outputH (float met, float cent);
void input2H (float&, float&);
void conv2H(float &meter, float &cent);
void output2H (float feet, float inches);   
void input3H (float&, float&);
void conv3H(float &pound, float &ounces);
void output3H (float kgrams, float grams);
void input32H (float&, float&);
void conv32H(float &kgrams, float &grams);
void output32H (float pound, float ounces);
        float feet, inches, meter, cent, pound, ounces;
    int resp, respT;
    
    cout<<"If you would like to convert lengths enter 1"<<endl;
    cout<<"If you would like to convert weights enter 2"<<endl;
    cin>>respT;
    
    do{
    cout<<"ERROR: You did not enter either 1 or 2. Please try again."<<endl;
    cout<<"If you would like to convert lengths enter 1"<<endl;
    cout<<"If you would like to convert weights enter 2"<<endl;
    cin>>respT;
    
    }while (respT!=1&&respT!=2);
    
    if (respT == 1){
    cout<<"If you would like to convert from feet to meters enter 1"<<endl;
    cout<<"If you would like to convert from meters to feet enter 2"<<endl;
    cin>>resp;
    
    do{
    cout<<"ERROR: You did not enter either 1 or 2. Please try again."<<endl;
    cout<<"If you would like to convert from feet to meters enter 1"<<endl;
    cout<<"If you would like to convert from meters to feet enter 2"<<endl;
    cin>>resp;
    
    }while (resp!=1&&resp!=2);
    
    if (resp == 1){
    inputH(feet, inches);
    convH(feet, inches);
    outputH (feet, inches);
    } else if (resp == 2){
     input2H(feet, inches);
     conv2H(feet, inches);
     output2H (feet, inches);
    }
    } else if (respT == 2){
        cout<<"If you would like to convert from pounds to kilograms enter 1"<<endl;
    cout<<"If you would like to convert from kilograms to pounds enter 2"<<endl;
    cin>>resp;
    
    do{
    cout<<"ERROR: You did not enter either 1 or 2. Please try again."<<endl;
    cout<<"If you would like to convert from pounds to kilograms enter 1"<<endl;
    cout<<"If you would like to convert from kilograms to pounds enter 2"<<endl;
    cin>>resp;
    
    }while (resp!=1&&resp!=2);

    if (resp == 1){
    input3H(pound, ounces);
    conv3H(pound, ounces);
    output3H (pound, ounces);
    } else if (resp == 2){
    input32H(pound, ounces);
    conv32H(pound, ounces);
    output32H (pound, ounces);
    }
    }
}

void inputH (float &feet, float &inches){
    cout << "Please enter a length in feet " << endl;
    cin >> feet;
    cout << "Please enter a length in inches" << endl;
    cin >> inches;
}
 
void convH (float &feet, float &inches){
     feet *= 0.3048;
     inches *= 2.54;
}
 
void outputH (float met, float cent){
    cout << met << " meters and " << cent << "cm " << endl;
}

void input2H (float &meter, float &cent){
    cout << "Please enter a length in meters " << endl;
    cin >> meter;
    cout << "Please enter a length in centimeters " << endl;
    cin >> cent;
}
 
void conv2H (float &meter, float &cent){
     meter *= 3.28084;
     cent = meter*12;
}
 
void output2H (float feet, float inches){
    cout << feet << " feet and " << inches << "in " << endl;
}

void input3H (float &pound, float &ounces){
    cout << "Please enter a weight in pound " << endl;
    cin >> pound;
    cout << "Please enter a weight in ounces" << endl;
    cin >> ounces;
}
 
void conv3H (float &pound, float &ounces){
     pound *= 0.453592;
     ounces = pound*16;
}
 
void output3H (float kgrams, float grams){
    cout << kgrams << " kilograms and " << grams << "grams " << endl;
}

void input32H (float &kgrams, float &grams){
    cout << "Please enter a weight in kilograms " << endl;
    cin >> kgrams;
    cout << "Please enter a weight in grams" << endl;
    cin >> grams;
}
 
void conv32H (float &kgrams, float &grams){
     kgrams *= 2.2046;
     grams = kgrams*.001;
}
 
void output32H (float pound, float ounces){
    cout << pound << " pounds and " << ounces << " ounces " << endl;
}

//************************** PROBLEM 14 ********************************
void problem8(){
        cout<<"In problem # 14"<<endl<<endl;
        
        
float winChil (float, float, float);
        float winCfac, winSped, tempr;
    //user inputs
    
    cout<<"Input the Wind speed in m/sec :"<<endl;
    cin>>winSped;
    cout<<"Input the temperature in degrees Celsius that is less than or equal to 10"<<endl;
    cin>>tempr;
    do{
        cout<<"ERROR: Please enter a number less than or equal to 10."<<endl;
        cout<<"Input the temperature in degrees Celsius that is less than or equal to 10"<<endl;
    cin>>tempr;
    } while (tempr>10);
        
    cout<<"The Wind Chill Index is : "<<winChil(winCfac,winSped,tempr)<<" degrees Celsius"<<endl;
}

float winChil (float winCfac, float winSped, float tempr){
    winCfac = 13.12+0.6215*tempr-11.37*winSped+0.3965*tempr*winSped;
    return winCfac;
    
}


void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}