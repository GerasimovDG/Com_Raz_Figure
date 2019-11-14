#include "pch.h"
#include "Circle.h"


Circle::Circle() : Figure() {
}

Circle::Circle(double _rad) : Figure(), 
								radius(_rad), 
								area(pow(radius, 2) * M_PI){
}


double Circle::getArea() {
	return area;
}

string Circle::getType() {
	return "Circle";
}
