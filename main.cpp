// TP_surcharge_op.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    // Création de deux objets Point
	Point p1(1.5, 2.5);
	Point p2(3.0, 4.0);

	// Utilisation de l'opérateur + surchargé
	Point p3 = p1 + p2;

	// Utilisation de l'opérateur << surchargé
	cout << "Point p1 : " << p1 << endl;
	cout << "Point p2 : " << p2 << endl;
	cout << "Somme (p1 + p2) : " << p3 << endl;

	// Autre exemple de surcharge d'opérateur
	p3 = p3 + Point(1.0, 1.0);
	cout << "p3 apres addition : " << p3 << endl;

	return 0;
}