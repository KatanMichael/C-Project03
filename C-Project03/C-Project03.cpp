// C-Project03.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

void main()
{

	Point o(0, 0);
	Point a(0, 1);
	Point b(1, 0);

	Rectalngle r(a, b);
	Triangle t(o, a, b);


	cout << r.getArea() << " , " << r.getPerim() << endl;
	cout << t.getArea() << " , " << t.getPerim() << endl;



	system("pause");
}

