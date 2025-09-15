#pragma once
#include <iostream>

class Point
{
public:
	Point(double x = 0.0, double y = 0.0);

	// Surcharge de l'opérateur + en tant que fonction membre
	Point operator+(const Point& autre);

	// Déclaration de la surcharge de l'opérateur << en tant que fonction amie
	friend std::ostream& operator<<(std::ostream& os, const Point& point);
private:
	double m_x;
	double m_y;
};
