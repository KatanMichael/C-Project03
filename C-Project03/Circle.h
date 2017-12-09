#ifndef Circle_H
#define Circle_H

#include "Point.h"
#include "Shape.h"

class Circle: public Shape
{
private:
	const Point mid;
	int radius;

public:
	Circle(const Point&, int);
	~Circle();
	virtual double getArea();
	virtual double getPerim();

};



#endif
