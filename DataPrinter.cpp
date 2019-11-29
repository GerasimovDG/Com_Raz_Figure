#include "pch.h"
#include "DataPrinter.h"
#include "Circle.h"
#include "Ellipse.h"



DataPrinter::DataPrinter() : Visitor()
{
}


DataPrinter::~DataPrinter()
{
}

void DataPrinter::visitCircle(Circle* figure) {
	// cout << "Figure type: " << figure->getType() << endl;
	cout << " Circle. 	";
	cout << " Figure area: " << figure->getArea() << endl;
}

void DataPrinter::visitEllipse(Ellipse* figure) {
	// cout << "Figure type: " << figure->getType() << endl;
	cout << " Ellipse.	";
	cout << " Figure area: " << figure->getArea() << endl;
}

