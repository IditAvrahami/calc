#include "Sin.h"
#include <cmath>
#include <iostream>

Sin::Sin()
{
	m_expresion = "sin( x )";
}

Sin::Sin(const std::string& inside)
{
	m_expresion = "sin( " + inside + " )" ;
}

double Sin::calculateAnswer(const double x) // x = result
{
	return std::sin(x);
}

void Sin::print()
{
	std::cout << m_expresion;
}

std::string Sin::getExpresion()
{
	return m_expresion;
}
