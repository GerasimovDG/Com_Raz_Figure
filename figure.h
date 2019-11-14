#pragma once
#define _USE_MATH_DEFINES

#include<iostream>
#include <string>
#include <math.h>

using namespace std;


class Figure
{
protected:
	double height = 0.0;
	double width = 0.0;
public:
	Figure();
	Figure(double _height, double _width);

	virtual double getArea() = 0;	//	вернуть площадь фигуры
	virtual string getType() = 0;	//	вернуть тип фигуры


};

