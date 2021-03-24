#pragma once
#include "Function.h"
#include <iostream>
#include <string>

class Sin : public Function
{
public:
	Sin();
	 Sin(const std::string& inside);
	~Sin() = default;
	virtual double calculateAnswer(const double x);
	virtual void print();
	virtual std::string getExpresion();
	virtual std::shared_ptr<Function> getFirst() { return std::shared_ptr<Function>(nullptr); };
	virtual std::shared_ptr<Function> getSecond() { return std::shared_ptr<Function>(nullptr); };
	virtual void setFirst(const std::shared_ptr<Function>& first) {};
	virtual void setSecond(const std::shared_ptr<Function>& second) {};

private:
	//std::shared_ptr<Function> expresion;
	std::string m_expresion;
};
