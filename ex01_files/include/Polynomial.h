#pragma once
#include "Function.h"
#include  <vector>

class Polynomial : public Function
{
public:
	Polynomial(const int degree, const std::vector<double>& coefficient);
	~Polynomial() = default;
	bool allZero();
	virtual double calculateAnswer(const double x);
	virtual void print();
	virtual std::string getExpresion();
	virtual std::shared_ptr<Function> getFirst() { return std::shared_ptr<Function>(nullptr); };
	virtual std::shared_ptr<Function> getSecond() { return std::shared_ptr<Function>(nullptr); };
	virtual void setFirst(const std::shared_ptr<Function>& first) {};
	virtual void setSecond(const std::shared_ptr<Function>& second) {};

private:
	std::vector<double> m_polynom;
	int m_degree;
};
