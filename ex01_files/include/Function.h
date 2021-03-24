#pragma once
#include <memory>
#include <string>

class Function
{
public:
	Function() = default;
	//~Function();
	virtual double calculateAnswer(const double x) = 0;
	virtual void print() = 0;
//	virtual Function getFunction() = 0;
	virtual std::shared_ptr<Function> getFirst() = 0;
	virtual std::shared_ptr<Function> getSecond() = 0;
	virtual void setFirst(const std::shared_ptr<Function>& first) = 0;
	virtual void setSecond(const std::shared_ptr<Function>& second) = 0;
	virtual std::string getExpresion() = 0;
private:
//	std::string m_expresion;
};
