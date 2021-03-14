#pragma once

#include "Figure.h"

class Triangle : public Figure
{
protected:

	double _a;
	double _b;
	double _c;

public:

	Triangle(double a, double b, double c);

	double CalculatorP() override;
	double CalculatorS() override;
};