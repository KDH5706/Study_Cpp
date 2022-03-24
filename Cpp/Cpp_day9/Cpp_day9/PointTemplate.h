#pragma once
#ifndef __POINT_TEMPLATE_H__
#define __POINT_TEMPLATE_H__

template <typename T>
class Point
{
public:
	Point(T x = 0, T y = 0);
	void ShowPosition() const;

private:
	T xpos, ypos;
};

#endif // !__POINT_TEMPLATE_H__

