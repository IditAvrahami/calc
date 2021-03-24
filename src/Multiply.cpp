#include "Multiply.h"
#include <iostream>

Multiply::Multiply(const std::shared_ptr<Function>& func1, const std::shared_ptr<Function>& func2)
{
	function1 = func1;
	function2 = func2;
	m_expretion = "( " + func1->getExpresion() + " ) * ( " + func2->getExpresion() + " )";
}

double Multiply::calculateAnswer(const double x)
{
	return (function1->calculateAnswer(x) * function2->calculateAnswer(x));
}

std::shared_ptr<Function> Multiply::getFirst()
{
	return function1;
}

std::shared_ptr<Function> Multiply::getSecond()
{
	return function2;
}

void Multiply::setFirst(const std::shared_ptr<Function>& first)
{
	function1 = first;
}

void Multiply::setSecond(const std::shared_ptr<Function>& second)
{
	function2 = second;
}

bool Multiply::checkIfValidValue(const double x)
{
	return true;
}

void Multiply::print()
{
	std::cout << m_expretion;
	/*	std::cout << "( ";
		function1->print();
		std::cout << " ) + ( ";
		function2->print();
		std::cout << " )" << std::endl; */
}

std::string Multiply::getExpresion()
{
	return m_expretion;
}
