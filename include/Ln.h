#pragma once
#include "Function.h"
#include <string>

class Ln : public Function
{
public:
	Ln();
	Ln(const std::string& inside);
	Ln(const double base,const std::shared_ptr<Function>& func); // get base
    ~Ln() = default;
	virtual double calculateAnswer(const double x);
	virtual void print();
	virtual std::string getExpresion();
	virtual std::shared_ptr<Function> getFirst() { return std::shared_ptr<Function>(nullptr); };
	virtual std::shared_ptr<Function> getSecond() { return std::shared_ptr<Function>(nullptr); };
	virtual void setFirst(const std::shared_ptr<Function>& first) {};
	virtual void setSecond(const std::shared_ptr<Function>& second) {};

private:
	std::string m_expresion;
	std::shared_ptr<Function> m_func;
	double m_base ;
};
