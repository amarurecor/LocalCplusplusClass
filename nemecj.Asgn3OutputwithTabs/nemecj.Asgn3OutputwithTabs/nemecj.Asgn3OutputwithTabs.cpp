// nemecj.Asgn3OutputwithTabs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// Set a block of space aside for each cout with .width
	// Then set an alignment within that block with left/right
	// Put two blocks before endl, rinse, repeat
	cout.width(10); cout << left << "PART NO.";
	cout.width(10); cout << right << "PRICE" << endl;

	cout.width(10); cout << left<< "T1267";
	cout.width(10); cout << right << "$6.34" << endl;

	cout.width(10); cout << left<< "T1300";
	cout.width(10); cout << right << "$8.92" << endl;

	cout.width(10); cout << left<< "T2401";
	cout.width(10); cout << right << "$65.40" << endl;

	cout.width(10); cout << left<< "T4482"; 
	cout.width(10); cout << right << "$103.45" << endl;


	system("Pause");
	return 0;
}