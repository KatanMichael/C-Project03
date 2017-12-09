#include "stdafx.h"


#include "Triangle.h"
#include <math.h>


Triangle::Triangle(const Point & x, const Point & y, const Point & z)
{
	this->_x = new Point(x);
	this->_y = new Point(y);
	this->_z = new Point(z);

	edgeA = calculateEdges(*_x, *_y);
	edgeB = calculateEdges(*_x, *_z);
	edgeC = calculateEdges(*_z, *_y);

}

Triangle::~Triangle()
{
}

double Triangle::getArea()
{
	double sum;

	sum = (edgeA + edgeB + edgeC)*(edgeA + edgeB - edgeC)*(edgeA - edgeB + edgeC)*(-edgeA + edgeB + edgeC);
	sum = sqrt(sum);
	sum = sum*0.25;

	return sum;
}

double Triangle::getPerim()
{
	return (edgeA + edgeB + edgeC);

}

double Triangle:: calculateEdges(const Point& x, const Point& y)
{
	double temp1X = x.getX(), temp1Y = x.getY();
	double temp2X = y.getX(), temp2Y = y.getY();
	double distance = sqrt(pow((temp1X - temp2X), 2.0) + pow((temp1Y - temp2Y), 2.0));

	return distance;

}


