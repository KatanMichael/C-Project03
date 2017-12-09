#ifndef Triangle_H
#define Triangle_H

#include "Point.h"
#include "Polygon.h"

class Triangle: public Polygon
{

private:
	const Point *_x;
	const Point *_y;
	const Point *_z;

	double edgeA = 0;
	double edgeB = 0;
	double edgeC = 0;;

	double calculateEdges(const Point& x, const Point& y);

public:
	Triangle(const Point& x, const Point& y, const Point& z);
	~Triangle();

	virtual double getArea();
	virtual double getPerim();

};

#endif


