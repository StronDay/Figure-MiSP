#include "Figure.h"
#include "Triangle.h"
#include "RTriangle.h"

int main() {

	Triangle tr1(5, 6, 6);

	cout << "Create figure: " << tr1.GetName() << endl;
	cout << "Figure perimetr: " << tr1.CalculatorP() << endl;
	cout << "Figure area: " << tr1.CalculatorS() << endl;

	RTriangle tr2(3, 4);

	cout << "Create figure: " << tr2.GetName() << endl;
	cout << "Figure perimetr: " << tr2.CalculatorP() << endl;
	cout << "Figure area: " << tr2.CalculatorS() << endl;

	return 0;
}