//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class rectangle
//{
//private:
//	float len, wid, peri, area;
//public:
//	rectangle()
//	{
//		len = 1;
//		wid = 1;
//	}
//	void setLen(float l)
//	{
//		while (l<0.0 || l>20.0)
//		{
//			cout << "Enter length again: ";
//			cin >> l;
//		}
//			len = l;
//	}
//	void setWid(float w)
//	{
//		while (w<0.0 || w>20.0)
//		{
//			cout << "Enter length again: ";
//			cin >> w;
//		}
//			wid = w;
//	}
//	float getLen()
//	{
//		return len;
//	}
//	float getWid()
//	{
//		return wid;
//	}
//	float calcPeri()
//	{
//		peri = 2 * (len+wid);
//		return peri;
//	}
//	float calcArea()
//	{
//		area = len*wid;
//		return area;
//	}
//
//};
//
//int main()
//{
//	rectangle rec;
//	float l, w;
//	cout << "Enter Length of Rectangle: ";
//	cin >> l;
//	rec.setLen(l);
//	cout << "Enter Width of Rectangle: ";
//	cin >> w;
//	rec.setWid(w);
//	cout << "The perimeter of rectangle is " << rec.calcPeri()<<endl;
//	cout << "The area of rectangle is " << rec.calcArea()<<endl;
//	cout << "\n\n_____________________________________\n\n";
//
//	system("pause");
//	return 0;
//}
//
