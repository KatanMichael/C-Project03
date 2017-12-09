#include "stdafx.h"
#include "Rectangle.h"

Rectalngle::Rectalngle(const Point &x, const Point &y)
{
	this->_x = new Point(x.getX(), x.getY());
	this->_y = new Point(y.getX(), y.getY());

	edgeA = (_x->getX() - y.getX());
	if(edgeA < 0)
	{
		edgeA = edgeA*-1;
	}

	edgeB = (_x->getY() - y.getY());
	if (edgeB < 0)
	{
		edgeB = edgeB*-1;
	}


}

Rectalngle::~Rectalngle()
{
	delete this->_x;
	delete this->_y;
}

double Rectalngle::getArea()
{
	double area;
	area = edgeA*edgeB;
	return area;
}

double Rectalngle::getPerim()
{
	double perim;
	perim = edgeA * 2 + edgeB * 2;
	return perim;
}
