#pragma once
class Circle;
class Ellipse;

class Visitor
{
public:
	Visitor();
	~Visitor();

	virtual void visitEllipse(Ellipse *figure) = 0;
	virtual void visitCircle(Circle *figure) = 0;
};

