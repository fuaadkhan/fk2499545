/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 19, 2014, 10:25 AM
 * Rock, Paper, scissors
 * Savitch Chapter 3, Problem 1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototype

//Execution begins here
int main()
{
	//Declaer variables
	int plyrOne;
	int plyrTwo;

	cout << "Player 1: Enter 0(Rock), 1(Paper), or 2(Scissors) ";
	cin >> plyrOne;
        
        cout << "Player 2: Enter 0(Rock), 1(Paper), or 2(Scissors) ";
	cin >> plyrTwo;

	switch(plyrOne)
	{
		case 0:
			if (plyrTwo = 0){
			cout << "Player 1 played Rock." << endl;
			cout << "Player 2 played Rock." << endl;
			cout << "Game is a Tied." << endl;
			break;
                        }

			if (plyrTwo = 1){
			cout << "Player 1 played Rock." << endl;
			cout << "Player 2 played Paper." << endl;
			cout << "Player 2 Wins!" << endl;
			break;
                        }

			if (plyrTwo = 2){
			cout << "Player 1 played Rock." << endl;
			cout << "Player 2 played Scissors." << endl;
                        cout << "Player 1 Wins!" << endl;
			break;
                        }

		case 1:
			if (plyrTwo = 0){
			cout << "Player 1 Paper." << endl;
			cout << "Player 2 played Rock." << endl;
			cout << "Player 1 Wins!" << endl;
			break;
                        }

			if (plyrTwo = 1){
			cout << "Player 1 Paper." << endl;
			cout << "Player 2 played Paper." << endl;
			cout << "Game is a Tied." << endl;
			break;
                        }

			if (plyrTwo = 2){
			cout << "Player 1 Paper." << endl;
			cout << "Player 2 played Scissors." << endl;
			cout << "Player 2 Wins!" << endl;
			break;
                        }

		case 2:
			if (plyrTwo = 0){
			cout << "Player 1 played Scissors." << endl;
			cout << "Player 2 played Rock." << endl;
			cout << "Player 2 Wins!" << endl;
			break;
                        }

			if (plyrTwo = 1){
			cout << "Player 1 played Scissors." << endl;
			cout << "Player 2 played Paper." << endl;
			cout << "Player 1 Wins!" << endl;
			break;
                        }

			if (plyrTwo = 2){
			cout << "Player 1 played Scissors." << endl;
			cout << "Player 2 played Scissors." << endl;
			cout << "Game is a Tied." << endl;
			break;
                        }

		default: cout << "Invalid number, Play again" << endl;
	}

	return 0;
}

