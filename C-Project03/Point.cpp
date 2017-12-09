#include "stdafx.h"

#include "Point.h"

Point::Point(int x, int y)
{
	this->_x = x;
	this->_y = y;
}

Point::Point(const Point &p)
{
	this->_x = p.getX();
	this->_y = p.getY();

}

Point::~Point() {}


int Point::getX() const
{
	return this->_x;
}

int Point::getY() const
{
	return this->_y;
}


void Point::setX(int x)
{
	this->_x = x;
}

void Point::setY(int y)
{
	this->_y = y;
}

