#pragma once
#include <memory>
#include "Function.h"
#include <string>

class Multiply : public Function
{
public:
	Multiply(const std::shared_ptr<Function>& func1, const std::shared_ptr<Function>& func2);
	~Multiply() = default;
	virtual double calculateAnswer(const double x);
	//void operationFunc() = 0; // polimorfizem
	//void addToList();
	virtual std::shared_ptr<Function> getFirst();
	virtual std::shared_ptr<Function> getSecond();
	virtual void setFirst(const std::shared_ptr<Function>& first);
	virtual void setSecond(const std::shared_ptr<Function>& second);
	virtual bool checkIfValidValue(const double x);
	virtual void print();
	virtual std::string getExpresion();

private:
	std::shared_ptr<Function> function1;
	std::shared_ptr<Function> function2;
	std::string m_expretion;
};
