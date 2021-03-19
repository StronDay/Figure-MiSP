#include "RTriangle.h"

RTriangle::RTriangle(double a, double b) : Triangle (a, b, sqrt(a* a + b * b))
{
	_name = "RTriangle";
}

double RTriangle::CalculatorP() { return (_a + _b + _c); }

double RTriangle::CalculatorS() { return ((_a * _b)/2); }