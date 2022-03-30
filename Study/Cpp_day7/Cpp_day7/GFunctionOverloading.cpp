//#include <iostream>
//using namespace std;
//
//class Point
//{
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{	}
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	friend Point operator+(const Point& pos1, const Point& pos2);
//	friend Point operator+(const int num, const Point& pos);
//
//private:
//	int xpos, ypos;
//};
//
//inline Point operator+(const Point& pos1, const Point& pos2)
//{
//	return Point(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//}
//
//inline Point operator+(const int num, const Point& pos)
//{
//	return Point(num + pos.xpos, num + pos.ypos);
//}
//
//int main()
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1 + pos2;
//	Point pos4 = 100 + pos1;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//	pos4.ShowPosition();
//
//	return 0;
//}
