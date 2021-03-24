#include "Add.h"
#include <iostream>

Add::Add(const std::shared_ptr<Function>& func1,const std::shared_ptr<Function>& func2)
{
	function1 = func1;
	function2 = func2;
	m_expretion = "( " + func1->getExpresion() + " ) + ( " + func2->getExpresion() + " )";
}

double Add::calculateAnswer(const double x)
{
	return (function1->calculateAnswer(x) +  function2->calculateAnswer(x) );
}

std::shared_ptr<Function> Add::getFirst()
{
	return function1;
}

std::shared_ptr<Function> Add::getSecond()
{
	return function2;
}

void Add::setFirst(const std::shared_ptr<Function>& first)
{
	function1 = first;
}

void Add::setSecond(const std::shared_ptr<Function>& second)
{
	function2 = second;
}

bool Add::checkIfValidValue(const double x)
{
	return true;
}

void Add::print()
{
	std::cout << m_expretion;
}

std::string Add::getExpresion()
{
	return m_expretion;
}
