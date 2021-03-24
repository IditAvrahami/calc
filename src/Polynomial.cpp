#include "Polynomial.h"
#include <iostream>
#include <iomanip>

Polynomial::Polynomial(const int degree, const std::vector<double>& coefficient) 
	: m_degree(degree), m_polynom(coefficient)
{
	for (size_t i = 0; i < coefficient.size() ; i++)
	{
		if (allZero())
		{ 
			m_polynom.resize(1);
			m_polynom[0] = 0;
		}
	}
}

bool Polynomial::allZero()
{
	for (size_t i = 0; i < m_polynom.size(); i++)
	{
		if (m_polynom[i] != 0)
			return false;
	}
	return true;
}

double Polynomial::calculateAnswer(const double x)
{
	double result = m_polynom[0];
	double expResult = x;
	for (size_t i = 1; i < m_degree; i++)
	{
		result += (m_polynom[i] * expResult);
		expResult *= expResult;
	}
	return result;
}

void Polynomial::print()
{
	std::cout << std::setprecision(3)<< this->getExpresion();
}

std::string Polynomial::getExpresion()
{
	std::string exp ;
	//for the exp of x
	int size = m_degree - 1;
	for (size_t i = size ; i > 0; i--)
	{
		if (m_polynom[i] != 0)
		{
			exp += std::to_string(m_polynom[i]);
			exp += " x ^ " + std::to_string(i);
			exp += " + ";
		}
	}
	//for the free number
	exp += std::to_string(m_polynom[0]);
	return std::string(exp);
}
