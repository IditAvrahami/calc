#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "Function.h"
#include <string>
class Menu
{
public:
	 Menu(); // build the array func sin and ln() 
	 ~Menu() = default;
//	void myChoice(std::string str); // need to check what todo
//	std::vector<char> getFunc();
//	void setFunc();
	void start(); // loop of all get input from the user
	void deleteFunc(const int row);
	void helpFunc();
	void printFuncList();
	
private:
	//std::vector<std::shared_ptr<std::vector<char>>> functions;
	std::vector<std::shared_ptr<Function>> functions; // point on funcs
};
