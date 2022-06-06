#pragma once
#include "Equation.h";
#include <iostream>

using namespace std;

class QuadraticEquation : public Equation
{
public:
	QuadraticEquation(double a, double b, double c) {
		while (a < 0) {
			cout << "¬вед≥ть значенн€ коеф≥ц≥Їнта а" << endl;
			cin >> a;
		}
		setX2(a);
		setX(b);
		setB(c);
	}

	virtual string getEquationRoot() const;
};

