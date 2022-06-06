#pragma once
#include "Equation.h";

class LinearEquation : public Equation
{
public:
	LinearEquation(double a, double b) {
		setX(a);
		setB(b);
	}

	virtual string getEquationRoot() const;
};
