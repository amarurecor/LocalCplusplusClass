// nemecjAsgn17ClassesRectangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

class Rectangle
{	
	private:
		double length;
		double width;   // Data members , area, perimeter;
		double area;
		double perimeter;

	public:
		Rectangle(double l=1, double w=1) { setLength(l); setWidth(w); }      // Constructor
		void setLength(double l) {length = l;}  // Member method
		void setWidth(double w) {width = w;}    // Member method
		//double getWidth() {return width;};
		// To calculate area
		void Rectangle::calcArea() { area = width * length;}
		double Rectangle::getArea() {return area;}
		void Rectangle::calcPerimeter() { perimeter = ((2 * length) + (2* width)); }
		double Rectangle::getPerimeter() {return perimeter;}


		// To display data members
		//double Rectangle::showRec() {return length, width;}
};


int _tmain(int argc, _TCHAR* argv[])
{
	double length = 0;
	double width;

	cout << "Welcome!  I will now calculate the area and perimeter of a rectangle! " << endl
			<< "If would so kindly give me a length and width... " << endl;
	cout << "Length: ";
	cin >> length;
	while (length == 0)
	{ 
		cout << endl << "Try entering something different.. like a number: ";
		cin >> length;
	}
	cout << "   Width: ";
	cin >> width;
	cout << endl << "Thank you!  Give me one moment and I will have the results" << endl;

	cout << "The area is: ";

	Rectangle cRec;
	cRec.setLength(length);
	cRec.setWidth(width);

	cRec.calcArea();
	cout << cRec.getArea();
	cRec.calcPerimeter();
	cout << "    and the perimeter is: ";
	cout << cRec.getPerimeter();

	cout << endl;

	system("Pause");
	return 0;
}

