#include "pch.h"
#include "Ellipse.h"


Ellipse::Ellipse() : Figure() {
}

Ellipse::Ellipse(double _rad, double _bigrad) : Figure(), 
												radius(_rad), big_radius(_bigrad), 
												area(radius * big_radius * M_PI) {
}


double Ellipse::getArea() {
	return area;
}

string Ellipse::getType() {
	return "Ellipse";
}
