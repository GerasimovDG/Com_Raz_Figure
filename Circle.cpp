#include "pch.h"
#include "Circle.h"


Circle::Circle() : figure()
{
}

Circle::Circle(double _rad) : figure(_rad*2, _rad*2)
{
	radius = _rad;
}


double Circle::getArea() {
	return pow(radius, 2) * M_PI;
}

string Circle::getType() {
	return "Circle";
}
