#pragma once
#include "figure.h"

class Ellipse : public figure
{
	double radius = 0.0;
	double big_radius = 0.0;
public:
	Ellipse();
	Ellipse(double _rad, double _bigrad);


	virtual double getArea();
	virtual string getType();
};

