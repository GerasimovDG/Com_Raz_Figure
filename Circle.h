#pragma once
#include "figure.h"

class Circle: public Figure
{
protected:
	double radius = 0.0;
	double area = 0.0;
public:
	Circle();
	Circle(double _rad);

	virtual double getArea();
	virtual string getType();

	void accept(shared_ptr<Visitor> visitor);

};

