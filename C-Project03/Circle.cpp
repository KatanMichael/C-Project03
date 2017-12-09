#include "stdafx.h"
#include "Circle.h"
#include <math.h>

Circle::Circle(const Point& x, int r) :mid(x)
{
	if (r <= 0)
	{
		this->radius = 1;
	}
	else
	{
		this->radius = r;
	}
}

Circle::~Circle() {}

double Circle::getArea()
{
	double area;
	area = (3.141592654)*pow(this->radius, 2.0);
	return area;

}

double Circle::getPerim()
{
	double perim;
	perim = 2 * (3.141592654)*this->radius;

	return perim;


}
