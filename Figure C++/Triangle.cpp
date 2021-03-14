#include "Triangle.h"

Triangle::Triangle(double a, double b, double c)
{
	assert
	(
		!isnan(a) &&
		!isnan(b) &&
		!isnan(c) &&

		(a + b > c) &&
		(b + c > a) &&
		(c + a > b),
		
		"Incorrect enter Triangle variavles"
	);

	_name = "Triangle";

	_a = a;
	_b = b;
	_c = c;
}

double Triangle::CalculatorP() { return (_a + _b + _c); }

double Triangle::CalculatorS()
{
	double p = (CalculatorP() / 2);

	return
	(
		sqrt
		(

		p	* (p - _a)
			* (p - _b)
			* (p - _c)
		)
	);
}