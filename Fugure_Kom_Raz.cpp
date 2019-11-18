// Fugure_Kom_Raz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "figure.h"
#include "Circle.h"
#include "Ellipse.h"

using namespace std;

struct sort_class_x
{
	bool operator() (shared_ptr<Figure>i, shared_ptr<Figure>j)
	{
		return (i->getArea() < j->getArea());
	}
} sort_objectX;


int main()
{
	srand(time(0));

	int count_figure = 15;	// количество фигур, которое создадим

	vector<shared_ptr<Figure>> figureList(count_figure);

	for (int i = 0; i < count_figure; i++) {
		if (rand() % 2 == 0) {
			figureList[i] = make_shared<Circle>(rand() % 50 + 1);
		}
		else {
			figureList[i] = make_shared<Ellipse>(rand() % 50 + 1, rand() % 50 + 1);
		}
	}

	// вывод до сортировки
	for (int i = 0; i < count_figure; i++) {
		cout << i+1 << ".	"<< figureList[i]->getType() << "	-	" << figureList[i]->getArea() << endl;
	}
	cout << endl;
    
	// сортировка по возрастанию площадей
	sort(figureList.begin(), figureList.end(), sort_objectX);

	// вывод после сортировки
	for (int i = 0; i < count_figure; i++) {
		cout << i+1 << ".	" << figureList[i]->getType() << "	-	" << figureList[i]->getArea() << endl;
	}

	double total_area = 0.0;
	for (int i = 0; i < count_figure; i++) {
		if (figureList[i]->getType() == "Circle") {
			total_area += figureList[i]->getArea();
		}
	}
	cout << "\nTotal circle area: " << total_area << "." << endl;

	return 0;
}
