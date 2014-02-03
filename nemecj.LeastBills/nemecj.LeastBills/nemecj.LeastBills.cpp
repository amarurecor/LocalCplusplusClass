// nemecj.LeastBills.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
using namespace std;

double input;
double getCost();

int _tmain(int argc, _TCHAR* argv[])
{
	double change;
	double cost;
	double fiveDollars = 0;
	double oneDollars = 0;
	double quarters = 0;
	double dimes = 0;
	double nickels = 0;
	double pennies = 0;

	cout << "That's a very nice scarf.  How much would you like to pay for it?" << endl;
	cout << "Please don't say $0, that would hurt my feelings." << endl;
	cout << "But also don't say more than $10, that would hurt your wallet." << endl;

	cost = getCost();
	change = (10 - cost);

	cout << "You offered $" << cost << ".  That's a fair offer." << endl;
	cout << "I'll take your $10 bill and give you $" << change << " with the least number of bills and coins possible." << endl;


	if (change > 5)
	{
		change -= 5;
		fiveDollars += 1;
	}

	/*for (double i = 0; i<=change; i++)
	{
		oneDollars = i;
	}
	change -= oneDollars;

	for (double i = 0; i<=change; i+=0.25)
	{
		quarters = i;
	}
	change -= quarters;*/

	if (change >= 1)
	{
		oneDollars = 1;
		if (change >= 2)
		{
			oneDollars = 2;
			if (change >= 3)
			{
				oneDollars = 3;
				if (change >= 4)
				{
					oneDollars = 4;
				}
			}
		}
	}
	change -= oneDollars;

	if (change >= .25)
	{
		quarters = .25;
		if (change >= .50)
		{
			quarters = .50;
			if (change >= .75)
			{
				quarters = .75;
			}
		}
	}
	change -= quarters;
	cout << "The amount left after quarters: " << change << endl;
	
	if (change >= .1)
	{
		dimes = .1;
		if (change >= .2)
		{
			dimes = .2;
		}
	}
	change -= dimes;
	cout << "The amount left after dimes: " << change << endl;

	/*for (double i = 0; i<=change; i+=0.05)
	{
		nickels = i;
	}
	change -= nickels;*/

	if (change >= .05)
	{
		nickels = .05;
	}
	change -= nickels;
	cout << "The amount left after nickels: " << change << endl;

	if (change >= .01)
	{
		pennies = .01;
		if (change >= .02)
		{
			pennies= .02;
			if (change >= .03)
			{
				pennies= .03;
				if (change = .04)
				{
					pennies= .04;
				}
			}
		}
	}
	change -= pennies;

	cout << "Here is your change: " << endl;
	cout << "Five dollar bills: " << fiveDollars << endl;
	cout << "One dollar bills: " << oneDollars << endl;
	cout << "Quarters: " << (quarters * 4) << " x .25=  " << quarters<<  endl;
	cout << "Dimes: " << (dimes * 10) << " x .10=  " << dimes << endl;
	cout << "Nickels: " << (nickels * 20) << " x .05=  " << nickels << endl;
	cout << "Pennies: " << (pennies * 100) << " x .01=  " << pennies << endl;
	cout << "The amount left is: " << change << endl;


	system("Pause");
	return 0;
	
}

double getCost()
{
	cout << "$";
	cin >> input;

	while (input >= 10)
	{
		cout << "That's too much.  Offer me a little less." << endl;
		getCost();
	}

	while (input <= 0)
	{
		cout << "That's not enough.  Offer me a little more." << endl;
		getCost();
	}
	
	return input;
}

