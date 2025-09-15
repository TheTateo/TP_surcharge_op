#include "Point.h"

// Constructeur
Point::Point(double x, double y) : m_x(x), m_y(y) {}

// Définition de la surcharge de l'opérateur +
Point Point::operator+(const Point& autre) {
	return Point(m_x + autre.m_x, m_y + autre.m_y);
}

// Définition de la surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const Point& point) {
	os << "Point(" << point.m_x << ", " << point.m_y << ")";
	return os;
}