#pragma once
#include <string>

using namespace std;

class Equation abstract
{
private:
	double x2, x, b;
public:
	double getX2() const { return x2; }
	double getX() const { return x; }
	double getB() const { return b; }
	void setX2(double num) { x2 = num; }
	void setX(double num) { x = num; }
	void setB(double num) { b = num; }

	virtual string getEquationRoot() const { return ""; }
};
