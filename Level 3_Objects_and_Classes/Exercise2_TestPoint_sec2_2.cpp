// Test program to calculate distances from given points to origin and distances between two given points. 

#include "Point.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;



	
int main()

{
	double x1,y1 ;
	cout << "Input two values for x  and y  coordinates (Point 1) :" <<endl;
	cin >> x1 >> y1;

	double x2,y2 ;
	cout << "Input two values for x  and y  coordinates (Point 2) :" <<endl;
	cin >> x2 >> y2;


	// Create the point 1 instance using default constructor
	Point p1;

	// Set the user entered coordinates using setter functions.
	p1.setX(x1);
	p1.setY(y1);
	

	// Create the point 2 instance using default constructor 
	Point p2;

	// Set the user entered coordinates using setter functions.
	p2.setX(x2);
	p2.setY(y2);

	
	// Print the point coordinates using the get functions
	cout << " This is the x  coordinate for point 1 :	" << p1.getX() << endl;
	cout << " This is the y  coordinate for point 1 :	" << p1.getY() << endl;
	cout <<""<< endl;

	cout << " This is the x  coordinate for point 2 :	" << p2.getX() << endl;
	cout << " This is the y  coordinate for point 2 :	" << p2.getY() << endl;
	cout <<""<< endl;
	
	// Print the description of the points returned by the ToString() function.
	cout <<" Description of Point 1 : " <<p1.ToString() << endl;
	cout <<" Description of Point 2 : " <<p2.ToString() << endl;
	cout <<""<< endl;


	// Calculate Distances.
	cout <<" Distance from Point 1 to origin : " <<p1.DistanceOrigin() << endl;
	cout <<" Distance from Point 2 to origin : " <<p2.DistanceOrigin() << endl;

	//Distance between two points.
	cout <<" Distance from Point 1 to Point 2 : "<<p1.Distance(p2);
	cout <<""<< endl;

	
	system("pause");
	return 0;
}
