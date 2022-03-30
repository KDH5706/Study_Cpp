//#include <iostream>
//using namespace std;
//
//class Point
//{
//public:
//	Point(int x=0, int y=0) : xpos(x), ypos(y)
//	{ }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point& operator++()
//	{
//		xpos++;
//		ypos++;
//		return *this;
//	}
//	friend Point& operator--(Point& ref);
//	friend ostream& operator<< (ostream& os, const Point& ref);
//private:
//	int xpos, ypos;
//};
//
//Point& operator--(Point& ref)
//{
//	ref.xpos--;
//	ref.ypos--;
//	return ref;
//}
//
//ostream& operator<< (ostream& os, const Point& ref)
//{
//	os << '[' << ref.xpos << ", " << ref.ypos << ']';
//	return os;
//}
//
//int main()
//{
//	Point pos(1, 2);
//	++pos;
//	pos.ShowPosition();
//	--pos;
//	pos.ShowPosition();
//
//	++(++pos);
//	pos.ShowPosition();
//	--(--pos);
//	//pos.ShowPosition();
//
//	cout << pos << endl;
//
//
//	return 0;
//}
