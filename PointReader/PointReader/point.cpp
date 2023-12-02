#include <cmath>
#include "point.h"

Point::Point(int first, int second) : x(first), y(second)
{

}

double Point::distance()
{
	return sqrt(x * x + y * y);
}

Point Point::operator+(const Point& a)
{
	Point result(x + a.x, y + a.y);
	return result;
}

Point Point::operator-(const Point& a)
{
	Point result(x - a.x, y - a.y);
	return result;
}

std::istream& operator>>(std::istream& is, Point& a)
{
	int f, s;
	char c1, c2, c3;
	is >> c1 >> f >> c2 >> s >> c3;
	a = Point(f, s);
	return is;
}

std::ostream& operator<<(std::ostream& os, const Point& a)
{
	return os << '(' << a.x << ',' << a.y << ')' << '\n';
}