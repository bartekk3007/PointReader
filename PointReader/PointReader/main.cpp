#include <iostream>
#include <fstream>
#include <vector>
#include "point.h"
using namespace std;

int main()
{
	Point p1(4, 6);
	Point p2(7, 9);

	Point p3 = p1 + p2;
	std::cout << p1;

	std::vector<Point> v1;
	Point p(0, 0);

	std::ifstream ise("idane.txt");
	std::ofstream ose("mojedane.txt");

	while (ise >> p)
	{
		std::cout << p;
		std::cout << p.distance() << '\n';
		v1.push_back(p);
	}

	for (Point p : v1)
	{
		std::cout << p;
		ose << p;
	}

	return 0;
}