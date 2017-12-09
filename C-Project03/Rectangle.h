#ifndef Rectangle_H
#define Rectangle_H

#include "Point.h"
#include "Polygon.h"

class Rectalngle : public Polygon
{

private:
	const Point *_x;
	const Point *_y;

	int edgeA;
	int edgeB;


public:

	Rectalngle(const Point&, const Point&);

	virtual double getArea();
	virtual double getPerim();

	

};

#endif