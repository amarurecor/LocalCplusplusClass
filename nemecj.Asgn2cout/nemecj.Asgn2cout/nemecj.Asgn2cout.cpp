// nemecj.Asgn2cout.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// Cout to display chosen message on screen
	// endl to end lines
	// "  " one way to create blank spaces
	cout << "Computers, computers everywhere" << endl
			<< "  as far as I can C." << endl
			<< "I really, really like these things." << endl
			<< "  Oh joy.  Oh joy for me!" << endl;

	// To prevent the window from returning 0 and immediately closing
	system("Pause");
	return 0;
}

