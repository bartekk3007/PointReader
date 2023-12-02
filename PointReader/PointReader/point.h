#include <iostream>

class Point
{
	int x;
	int y;

public:
	Point(int first, int second);
	double distance();
	Point operator+(const Point& a);
	Point operator-(const Point& a);
	friend std::istream& operator>>(std::istream& is, Point& a);
	friend std::ostream& operator<<(std::ostream& os, const Point& a);
};