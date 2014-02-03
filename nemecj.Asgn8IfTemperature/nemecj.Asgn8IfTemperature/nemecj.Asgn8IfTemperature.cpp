// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Declare method before Main
void ConvertToF();
void ConvertToC();

int _tmain(int argc, _TCHAR* argv[])
{
	// To hold format temp is currently in
	char scale;

	// Call method
	cout << "Thanks for using the Temp Converter+ Pro!" << endl;
	cout << "What is the scale of the temperature you know (C or F) : ";
	cin >> scale;

	// Run if checks to see what user entered
	if (scale == 'F' || scale == 'f')
	{
		ConvertToC();
	}

	else if (scale == 'C' || scale == 'c')
	{
		ConvertToF();
	}

	// Apologize and blow up if user entered invalid value
	else
	{
		cout << "Unfortunately we do not convert from that format.  Check back later." << endl;
	}

	system("Pause");
	return 0;
}

void ConvertToF()
{
	// To hold-in temp
	double temp;

	cout << "What is the temperature (in Celsius) that you would like to convert: ";

	// Get in temp from user
	cin >> temp;

	// Convert to output because I think it's cleaner than doing it in the Cout
	double outTemp = (temp * (1.8) + 32);

	// The magic!  Converted temp output
	cout << "You entered " << setprecision(2) << fixed << temp << "C.  We will convert that to Fahrenheit..." << endl;
	cout << "We have finished our calculations.  The converted temperature is: " << setprecision(2) << fixed 
				<< outTemp << "F" << endl << endl;
}

void ConvertToC()
{
	// To hold-in temp
	double temp;

	cout << "What is the temperature (in Fahrenheit) that you would like to convert: ";

	// Get in temp from user
	cin >> temp;

	// Convert to output because I think it's cleaner than doing it in the Cout
	double outTemp = ((temp - 32) * .555556);

	// The magic!  Converted temp output
	cout << "You entered " << setprecision(2) << fixed << temp << "F.  We will convert that to Celsius..." << endl;
	cout << "We have finished our calculations.  The converted temperature is: " << setprecision(2) << fixed 
				<< outTemp << "C" << endl << endl;
}