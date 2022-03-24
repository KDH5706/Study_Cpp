#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class Point
{
public:
	Point(T x = 0, T y = 0) :xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

private:
	T xpos, ypos;
};

template <typename T>
class SimpleDataWrapper
{
public:
	SimpleDataWrapper(T data) : mdata(data)
	{}
	void ShowDataInfo()
	{
		cout << "Data : " << mdata << endl;
	}

private:
	T mdata;
};

template <>
class SimpleDataWrapper <char*>
{
public:
	SimpleDataWrapper(const char* data)
	{
		mdata = new char[strlen(data) + 1];
		strcpy(mdata, data);
	}
	void ShowDataInfo()
	{
		cout << "String : " << mdata << endl;
		cout << "Length : " << strlen(mdata) << endl;

	}
	~SimpleDataWrapper() { delete[]mdata; }

private:
	char* mdata;
};

template <>
class SimpleDataWrapper <Point<int>>
{
public:
	SimpleDataWrapper(int x, int y) : mdata(x, y)
	{}
	void ShowDataInfo()
	{
		mdata.ShowPosition();
	}

private:
	Point<int> mdata;
};

int main()
{
	SimpleDataWrapper<int> iwrap(170);
	iwrap.ShowDataInfo();
	SimpleDataWrapper<char*> swrap("Class Template Specialization");
	swrap.ShowDataInfo();
	SimpleDataWrapper<Point<int>> poswrap(3, 7);
	poswrap.ShowDataInfo();

	return 0;
}