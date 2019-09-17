#pragma once
#include "figure.h"

class Circle: public figure
{
	double radius = 0.0;
public:
	Circle();
	Circle(double _rad);

	virtual double getArea();
	virtual string getType();

};

