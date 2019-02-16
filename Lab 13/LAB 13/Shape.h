//#ifndef SHAPE_H
//#define SHAPE_H
//
//#include<iostream>
//using namespace std;
//
///*Define	a	pure	abstract	base	class	called	BasicShape.The	BasicShape	class	should
//have	the	following	members :
//Private	Member	Variable :
//area, a	double	used	to	hold	the	shape's	area.
//Public	Member	Functions :
//getArea.This	function	should	return	the	value	in	the	member	variable	area.
//calcArea.This	function	should	be	a	pure	virtual	function.*/
//
//class BasicShape
//{
//protected:
//	double area;
//public:
//	double getArea() { return area; }
//	virtual void calcArea() = 0;
//};
//
///*Next, define	a	class	named	Circle.It	should	be	derived	from	the	BasicShape	class.It
//should	have	the	following	members :
//Private	Member	Variables :
//centerX, a	long	integer	used	to	hold	the	x	coordinate	of	the	circle’s	center.
//centerY, a	long	integer	used	to	hold	the	y	coordinate	of	the	circle’s	center.
//radius, a	double	used	to	hold	the	circle's	radius.
//Public	Member	Functions :
//constructor—accepts	values	for	centerX, centerY, and	radius.Should	call
//the	overridden	calcArea	function	described	below.
//getCenterX—returns	the	value	in	centerX.
//getCenterY—returns	the	value	in	centerY.
//calcArea—calculates	the	area	of	the	circle(area = 3.14159	*	radius	*	radius)
//and stores	the result	in	the	inherited	member	area.*/
//
//class Circle:public BasicShape
//{
//private:
//	long int centerX;
//	long int centerY;
//	double radius;
//public:
//	Circle() { centerX = 0; centerY = 0; radius = 0; area = 0.0; }
//	Circle(long int x, long int y, double r);
//	void calcArea();
//	long int getCenterX() { return centerX; }
//	long int getCenterY() { return centerY; }
//};
//
///*Next, define	a	class	named	Rectangle.It	should	be	derived	from	the	BasicShape
//class.It	should	have	the	following	members :
//Private	Member	Variables :
//width, a	long	integer	used	to	hold	the	width	of	the	rectangle.
//length, a	long	integer	used	to	hold	the	length	of	the	rectangle.
//Public	Member	Functions :
//constructor—accepts	values	for	width	and	length.Should	call	the	overridden
//calcArea function	described	below.
//getWidth—returns	the	value	in	width.
//getLength—returns	the	value	in	length.
//calcArea—calculates	the	area	of	the	rectangle(area = length	*	width) and stores
//the	result	in	the	inherited	member	area.*/
//
//class Rectangle:public BasicShape
//{
//private:
//	long int width;
//	long int length;
//public:
//	Rectangle() { width = 0; length = 0; area = 0.0; }
//	Rectangle(long int w, long int l);
//	void calcArea();
//	long int getwidth() { return width; }
//	long int getlength() { return length; }
//};
//#endif
