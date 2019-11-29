#pragma once
#include <iostream>
#include "Visitor.h"

using namespace std;


class DataPrinter : public Visitor
{
public:
	DataPrinter();
	~DataPrinter();

	void visitCircle(Circle* figure);
	void visitEllipse(Ellipse* figure);
};

