#include <iostream>
#include <cstdlib>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y){ }
	friend ostream& operator<<(ostream& os, const Point& pos);

private:
	int xpos, ypos;
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

typedef Point* POINT_PTR;


class BoundCheckPointPtrArray
{
public:
	BoundCheckPointPtrArray(int len) : arrlen(len)
	{
		arr = new POINT_PTR[len];
	}
	/*POINT_PTR& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}*/
	POINT_PTR& operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int Getarrlen() const { return arrlen; }
	~BoundCheckPointPtrArray() { delete[]arr; }
private:
	POINT_PTR* arr = NULL;
	int arrlen = 0;

	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) { }
	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) { }
};

int main()
{
	BoundCheckPointPtrArray arr(3);
	arr[0] = new Point(3, 4);
	arr[1] = new Point(5, 6);
	arr[2] = new Point(7, 8);

	for (int i = 0; i < arr.Getarrlen(); i++)
		cout << *(arr[i]);

	for (int i = 0; i < arr.Getarrlen(); i++)
		delete arr[i];

	return 0;
}