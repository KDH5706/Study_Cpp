#include <iostream>
#include <cstdlib>

using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0):xpos(x), ypos(y)
	{}
	friend ostream& operator<<(ostream& os, const Point& pos);

private:
	int xpos, ypos;
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

class BoundCheckPointArray
{
public:
	BoundCheckPointArray(int len) : arrlen(len)
	{
		arr = new Point[len];
	}
	/*Point& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}*/
	Point& operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int Getarrlen() const { return arrlen; }
	~BoundCheckPointArray() { delete[]arr; }
private:
	Point* arr = NULL;
	int arrlen = 0;

	BoundCheckPointArray(const BoundCheckPointArray& arr){ }
	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) { }
};

int main()
{
	BoundCheckPointArray arr(3);
	arr[0] = Point(3, 4);
	arr[1] = Point(5, 6);
	arr[2] = Point(7, 8);

	for (int i = 0; i < arr.Getarrlen(); i++)
		cout << arr[i];

	return 0;
}