//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class sprectangle
//{
//private:
//	float peri, area;
//public:
//	float calcperi(float l, float w)
//	{
//		peri = 2 * (l+w);
//		return peri;
//	}
//	float calcarea(float l, float w)
//	{
//		area = l*w;
//		return area;
//	}
//};
//
//void checkcoor(float & x, float & y)
//{
//	while (x < 0 && y < 0 || x > 20.0 && y > 20.0)
//	{
//		cout << "enter require coordinate again: ";
//		cin >> x >> y;
//	}
//}
//
//float calcdistance(float x1, float y1, float x2, float y2)
//{
//	float l, sum;
//	sum = (pow((x2 - x1), 2) + pow((y2 - y1), 2));
//	l = sqrt(sum);
//	return l;
//}
//
//
//int main()
//{
//	float a1, a2, b1, b2, c1, c2, d1, d2;
//	float len1, len2, len3, len4;
//	sprectangle rec;
//	cout << "enter four corrdinates of rectangle (all should be in 1st quadrant)\n";
//	cout << "enter first coordinate: ";
//	cin >> a1 >> a2;
//	checkcoor(a1, a2);
//	cout << "enter second coordinate: ";
//	cin >> b1 >> b2;
//	checkcoor(b1, b2);
//	cout << "enter third coordinate: ";
//	cin >> c1 >> c2;
//	checkcoor(c1, c2);
//	cout << "enter fourth coordinate: ";
//	cin >> d1 >> d2;
//	checkcoor(d1, d2);
//
//	/*******************************************************************
//	calculate distances
//	*********************************************************************/
//
//	len1 = calcdistance(a1, a2, b1, b2);
//	len2 = calcdistance(b1, b2, c1, c2);
//	len3 = calcdistance(c1, c2, d1, d2);
//	len4 = calcdistance(d1, d2, a1, a2);
//
//	float len, wid;
//	if (len1 == len2 && len1 == len3 && len1 == len4)
//	{
//		cout << "these coordinates forms a square.\n";
//	}
//	else if (len1 == len3 && len2 == len4)
//	{
//		cout << "these coordinate forms a rectangle.\n";
//		if (len1 > len2)
//		{
//			len = len1;
//			wid = len2;
//		}
//
//		else
//		{
//			len = len2;
//			wid = len1;
//		}
//
//		cout << "the perimeter is " << rec.calcperi(len, wid) << ".\n";
//		cout << "the area is " << rec.calcarea(len, wid) << ".\n";
//	}
//	else
//	{
//		cout << "these coordinate forms neither rectangle nor square.\n";
//	}
//
//	system("pause");
//	return 0;
//}
