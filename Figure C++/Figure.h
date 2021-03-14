#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

class Figure 
{
protected:

	string _name;

public:

	virtual ~Figure() = default;
	
	virtual double CalculatorP() = 0;
	virtual double CalculatorS() = 0;

	const string& GetName();
};