#ifndef Point_H
#define Point_H

class Point
{
private:
	int _x;
	int _y;



public:
	
	Point(int, int);
	Point(const Point&);
	~Point();
	int getX() const;
	int getY() const;

	void setX(int);
	void setY(int);





};

#endif
