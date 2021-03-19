#pragma once

#include "Triangle.h"

class RTriangle : public Triangle
{
protected:

public:

	RTriangle(double a, double b);

	double CalculatorP() override;
	double CalculatorS() override;
};