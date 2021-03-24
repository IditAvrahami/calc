#include "Function.h"
#include "Composite.h"
#include <iostream>
#include <memory>
#include <string>
#include <vector>

Composite::Composite(const std::shared_ptr<Function>& func1, const std::shared_ptr<Function>& func2) 
	: m_function1(func1), m_function2(func2), m_expretion(m_function2->getExpresion())
{
}

double Composite::calculateAnswer(const double x)
{
	return m_function1->calculateAnswer(m_function2->calculateAnswer(x));
}

std::shared_ptr<Function> Composite::getFirst()
{
	return m_function1;
}

std::shared_ptr<Function> Composite::getSecond()
{
	return m_function2;
}

void Composite::setFirst(const std::shared_ptr<Function>& first)
{
	m_function1 = first;
}

void Composite::setSecond(const std::shared_ptr<Function>& second)
{
	m_function2 = second;
}

void Composite::print()
{
	for (size_t i = 0; i < m_function1->getExpresion().size() ; i++)
	{
		if (m_function1->getExpresion()[i] == 'x')
			std::cout << m_expretion;
		else
			std::cout << m_function1->getExpresion()[i];
	}
}

std::string Composite::getExpresion()
{
	std::string exp ="";
	for (size_t i = 0; i < m_function1->getExpresion().size(); i++)
	{
		if (m_function1->getExpresion()[i] == 'x')
			exp += m_expretion;
		else
			exp += m_function1->getExpresion()[i];
	}
	return exp;
}
