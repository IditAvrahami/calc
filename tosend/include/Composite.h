#pragma once
#include <memory>
#include "Function.h"
#include <string>


class Composite : public Function
{
public:
	 Composite(const std::shared_ptr<Function>& func1, const std::shared_ptr<Function>& func2);
	~ Composite() = default;
	virtual double calculateAnswer(const double x);
	virtual std::shared_ptr<Function> getFirst();
	virtual std::shared_ptr<Function> getSecond();
	virtual void setFirst(const std::shared_ptr<Function>& first);
	virtual void setSecond(const std::shared_ptr<Function>& second);
	virtual void print();
	virtual std::string getExpresion();

private:
	std::shared_ptr<Function> m_function1;
	std::shared_ptr<Function> m_function2;
	std::string m_expretion;
};
