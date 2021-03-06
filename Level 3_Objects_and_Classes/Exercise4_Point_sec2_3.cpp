// Point.cpp
// Function implementation for the functions in the header file Point.hpp(Point classs with x- and y- coordinates.) 


#include "Point.hpp"
#include <cmath>
#include <sstream>

// Default constructor 
Point::Point() : m_x(0), m_y(0) // Colon syntax.

{	//  If Colon syntax is not used following code block will be used.
	cout << "Hello ! I am the constructor ..\n";
	//	x = y =0.0;
}


// Initialize using newx and newy
Point::Point(double newx, double newy) :m_x(newx),m_y(newy)

{	//  If Colon syntax is not used following code block will be used.
	
	//m_x = newx;
	//m_y = newy;

	cout << "Hello ! I am the constructor ..\n";
}

// Copy constructor
Point::Point(const Point& source)
{
    m_x = source.m_x;
	m_y = source.m_y;
	cout << "Hello ! I am the copy constructor ..\n";
}

// Destructor
Point::~Point()

{	
		cout << "Bye my point instance ..\n";
}

// Getter function for coordinate x.
double Point::X() const		//	GetX() to X()

{
	return m_x;
}

//Setter function for coordinate x.
void Point::X(double newX)		//SetX() to X()

{ 
	m_x = newX;
}


// Getter function for coordinate y.
double Point::Y() const		//	GetY() to Y()

{
	return m_y;
}

//Setter function for coordinate y.
void Point::Y(double newY)		//SetY() to Y()

{ 
	m_y = newY;
}

// Returns a string description of the point.
std::string Point::ToString() const

{
	std::stringstream sm_x, sm_y;	

	sm_x << m_x;
	sm_y << m_y;

	std::string str;
	str = "\"Point("+sm_x.str()+","+sm_y.str()+")\"";

	return str;
}

//Calculate the distance to the origin (0,0).
double Point::Distance() const	// DistanceOrigin() is changed to Distance().
{
	double dist_to_origin;
	dist_to_origin = sqrt(pow((m_x- 0),2) + pow((m_y- 0),2)); //sqrt returns only positive sqrt value. I didn't consider abs value.

	return dist_to_origin;

}

 // Calculate the distance between two given points.
 // Distance function will be implemented by passing the argument as a "const reference". Therefore at this occasion copy constructor will not be 
 //called.
double Point::Distance(const Point& p) const
{
	double dist_to_point;
	dist_to_point = sqrt(pow((m_x- p.X()),2) + pow((m_y- p.Y()),2));//sqrt returns only positive sqrt value. I didn't consider abs value.

	//p.m_x = 10; This assignment will give a compiler error since p is not modifiable by function Distance(). p is passed as a const.
	return dist_to_point;
}