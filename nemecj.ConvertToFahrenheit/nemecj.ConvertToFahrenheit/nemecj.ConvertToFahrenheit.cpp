// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Declare method before Main
void ConvertToF();

int _tmain(int argc, _TCHAR* argv[])
{
	// Call method
	// Use a method because you may want to use it again
	ConvertToF();
	
	// Create a variable to deterime if the user wants to check another temp
	char again;
	
	// At this point the first convert has already run, user can run again 1 more time
	cout << "Press Y to convert another temperature...";
	// Take user's answer
	cin >> again;

	// If user wants to play again..
	if (again == 'Y' || again== 'y')
	{
		// Run it again
		ConvertToF();
	}

	system("Pause");
	return 0;
}

void ConvertToF()
{
	// To hold-in temp
	double temp;

	// Explanation of what's happening
	cout << "Welcome to our temperature converting station."  << endl 
		<< "What is the temperature (in Celsius) that you would like to convert?" << endl;

	// Get in temp from user
	cin >> temp;

	// Convert to output because I think it's cleaner than doing it in the Cout
	double outTemp = (temp * (1.8) + 32);

	// The magic!  Converted temp output
	cout << "You entered " << setprecision(2) << fixed << temp << "C.  We will convert that to Fahrenheit..." << endl;
	cout << "We have finished our calculations.  The converted temperature is: " << setprecision(2) << fixed 
				<< outTemp << "F" << endl << endl;
}