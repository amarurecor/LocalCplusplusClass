// nemecj.Asgn11ForLoops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int row; // Row position
	int col; // Col position
	
	// For loop for 10 rows, with an endl at the end
	for (int row = 0; row <= 10; row++)
	{
		// For loop for star and blank spot placement
		for (int col=0; col <= row; col++)
		{
			cout  << "*";			
		}
		// If row counter = number of stars wanted, 10 - row = number of blank spaces desired
		for (int blank=0; blank <= (10-row); blank++)
		{
			cout << " ";
		}


		// --------------------
		
		// Invert blank spaces and star counters to count down
		for (int col=0; col <= (10-row); col++)
		{
			cout << "*";
		}

		for (int blank=0; blank <= row; blank++)
		{
			cout << " ";
		}

		// --------------------

		// Add blank spaces before star counters
		for (int blank=0; blank <= row; blank++)
		{
			cout << " ";
		}
		for (int col=0; col <= (10-row); col++)
		{
			cout << "*";
		}		

		// --------------------

		// Same countdown as triangle 1 but with blanks first
		for (int blank=0; blank <= (10-row); blank++)
		{
			cout << " ";
		}
		for (int col=0; col <= row; col++)
		{
			cout << "*";
		}

		cout << endl;				
	}

	// Pause to enjoy the view
	system("Pause");
	return 0;
}

