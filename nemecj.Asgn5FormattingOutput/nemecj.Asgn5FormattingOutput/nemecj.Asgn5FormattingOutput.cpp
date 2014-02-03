// nemecj.Asgn5FormattingOutput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
// For setprecision and fixed
#include <iomanip>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// Declare variables
	int inum = 32;
	float dnum = 42.98765;

	// Display hexadecimal base format
	cout << "The hex of " << inum << " is " << hex << inum << endl;
	// Display octal value, make sure to show the decimal baseformat of inum
	cout << "The octal of " << dec << inum << " is " << oct << inum << endl;

	cout << endl;
	// Setprecision to determine decimal places, fixed to tell setprecision to count after decimal point
	cout << "|" << setw(10) << setprecision(3) << fixed << dnum << "|" << endl;
	cout << "|" << setw(10) << setprecision(4) << fixed << dnum << "|" << endl;
	cout << "|" << setw(10) << setprecision(5) << fixed << dnum << "|" << endl;
	cout << "|" << setw(10) << setprecision(6) << fixed << dnum << "|" << endl;
	cout << endl;

	// Make sure to show the decimal baseformat of inum
	cout << "|" << setw(5) << dec << inum << "|";  // No endl; so the next line can join
	cout << setw(10) << setprecision(2) << fixed << dnum << "|" << endl;

	system("Pause");
	return 0;

	// The only difference I noticed when changing dnum to float 
	//      is that the 6 precision number ended in a made up 2
}

