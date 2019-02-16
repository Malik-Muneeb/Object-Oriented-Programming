#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
using namespace std;

class Area
{
	double area;
public:
	Area() { area = 0; }
	double calcArea(double l, double w) { return l*w; }
};

class Perimeter
{
	double peri,area;
public:
	Perimeter() { peri = 0; }
	double calcPerimeter(double l, double w) { return 2*l*w; }
};

class Rectangle:public Area, public Perimeter
{
	double len, width;
public:
	Rectangle() { len = 0; width = 0; }
	Rectangle(double l, double w) : len(l),width(w){}
	void setLength(double l) { len = l; }
	void setWidth(double w) { width = w; }
	void callFun()
	{
		cout << "\nArea: " << calcArea(len,width);
		cout << "\nPerimeter: " << calcPerimeter(len, width);
	}
};
#endif
