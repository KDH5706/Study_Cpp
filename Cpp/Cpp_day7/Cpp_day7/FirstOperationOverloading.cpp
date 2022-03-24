//#include <iostream>
//using namespace std;
//
//class Point
//{
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{}
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point operator+(const Point& ref) const
//	{
//		Point pos(xpos + ref.xpos, ypos + ref.ypos);
//		return pos;
//	}
//	Point operator+(const int num) const
//	{
//		Point pos(xpos + num, ypos + num);
//		return pos;
//	}
//
//private:
//	int xpos, ypos;
//};
//
//int main()
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1 + pos2;
//	Point pos4 = pos1 + 100;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//	pos4.ShowPosition();
//
//	return 0;
//}

/**********************************/

//#include <iostream>
//using namespace std;
//
//class First
//{
//public:
//	First(int n1 = 0, int n2 = 0) :num1(n1), num2(n2)
//	{}
//	void ShowData() { cout << num1 << ", " << num2 << endl; }
//
//private:
//	int num1, num2;
//};
//
//class Second
//{
//public:
//	Second(int n3 = 0, int n4 = 0) :num3(n3), num4(n4)
//	{}
//	void ShowData() { cout << num3 << ", " << num4 << endl; }
//
//	Second& operator = (const Second& ref)
//	{
//		cout << "Second& operator = ()" << endl;
//		num3 = ref.num3;
//		num4 = ref.num4;
//		return *this;
//	}
//private:
//	int num3, num4;
//};
//
//int main()
//{
//	First fsrc(111, 222);
//	First fcpy;
//	Second ssrc(333, 444);
//	Second scpy;
//	fcpy = fsrc;
//	scpy = ssrc;
//	fcpy.ShowData();
//	scpy.ShowData();
//
//	First fob1, fob2;
//	Second sob1, sob2;
//	fob1 = fob2 = fsrc;
//	sob1 = sob2 = ssrc;
//
//	fob1.ShowData();
//	fob2.ShowData();
//	sob1.ShowData();
//	sob2.ShowData();
//
//	return 0;
//}
