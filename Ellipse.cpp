#include "pch.h"
#include "Ellipse.h"


Ellipse::Ellipse() : figure()
{
}

Ellipse::Ellipse(double _rad, double _bigrad) : figure(_rad*2, _bigrad*2)
{
	radius = _rad;
	big_radius = _bigrad;
}


double Ellipse::getArea() {
	return radius * big_radius * M_PI;
}

string Ellipse::getType() {
	return "Ellipse";
}
