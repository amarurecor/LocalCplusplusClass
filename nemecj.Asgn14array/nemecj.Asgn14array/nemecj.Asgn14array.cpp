// nemecj.Asgn14array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <Windows.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// Set contstants for size of array, because I read somewhere that you should
	const int NUMROWS = 2;
	const int NUMCOLS = 3;

	// Declare arrays, 2 dimensional because [] x 2, using constants
	//                              Hardcode values into arrays, I couldn't find a pattern to use a loop
	int first[NUMROWS][NUMCOLS] = { 16, 18, 23, 54, 91, 11 };
	int second[NUMROWS][NUMCOLS] = { 14, 52, 77, 16, 19, 59 };
	// Declare third array with no values yet because it's easier to loop
	int third[NUMROWS][NUMCOLS];

	// Loop for the values in 3rd array, declare rows, then count up with cols inside of rows counter
	for (int i=0; i <NUMROWS; i++)
	{
		for (int j=0; j < NUMCOLS; j++)
		{			
			third[i][j] = first[i][j] + second[i][j];
		}
	}

	// Painful hardcoding, kept as a memento of progess
	//cout << setw(10) << "First" << endl
	//		<< setw(4) << first[0][0] << setw(4) << first[0][1] << setw(4) << first[0][2] << endl
	//		<< setw(4) << first[1][0] << setw(4) << first[1][1] << setw(4) << first[1][2] << endl;
	
	// Kind of guessed and finagled with the setw sizes here
	cout << setw(9) << "First" << setw(15) << "Second";
	// Loop through arrays to display
	for (int i=0; i <NUMROWS; i++)
	{
		cout << endl;
		for (int j=0; j < NUMCOLS; j++)
		{			
			cout << setw(4) << first[i][j];
		}

		cout << setw(2) << " ";
		for (int j=0; j < NUMCOLS; j++)
		{			
			cout << setw(4) << second[i][j];
		}
	}

	cout << endl;
	// Just because
	cout << "To add the values of the two above arrays together, enter a: ";
	char add;
	cin >> add;

	if (add == 'a' || add == 'A')
	{
		cout << endl << "Good Job!";
		// Loop for third array display
		for (int i=0; i <NUMROWS; i++)
		{
			cout << endl;
			for (int j=0; j < NUMCOLS; j++)
			{			
				// Again hardcode saved to show progress.  Works, but with more characters
				//cout << setw(4) << first[i][j] + second[i][j];
				cout << setw(4) << third[i][j];
				// For effect, cool
				Sleep(500);
			}
		}

		cout << endl << "Thanks for helping me show off my array adding skills!";
	}

	else
	{
		cout << "Really?  You don't want to add them together? " << endl;
		// Is it alive?
		Sleep(1500);
		cout << "It's SO cool though! " << endl;
		// Is there someone on the other side of this program typing?
		Sleep(1500);
		cout << "I'm going to add them together for you anyway.";
		// Creepy
		Sleep(1500);

		for (int i=0; i <NUMROWS; i++)
		{
			cout << endl;
			for (int j=0; j < NUMCOLS; j++)
			{			
				cout << setw(4) << first[i][j] + second[i][j];
				Sleep(500);
			}
		}

		cout << endl << "See, how neat is that?";
		// That's pretty neat -- YouTube Nature Walk
	}

	cout << endl;

	system("Pause");
	return 0;
}

