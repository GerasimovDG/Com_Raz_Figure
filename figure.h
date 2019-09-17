#pragma once
#define _USE_MATH_DEFINES

#include<iostream>
#include <string>
#include <math.h>

using namespace std;


class figure
{
	double height = 0.0;
	double width = 0.0;
public:
	figure();
	figure(double _height, double _width);

	virtual double getArea() = 0;	//	������� ������� ������
	virtual string getType() = 0;	// ������� ��� ������


};

