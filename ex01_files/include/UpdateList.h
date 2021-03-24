#pragma once

class UpdateList
{
public:
	UpdateList(); // add sin ln(x)
	~UpdateList();
	void addToList();
	void deleteFromList(); 
	void organizeList(); 
	bool ifVaildFunc(); // if func exist
	// add new polinom to list
private:
	int m_numberOfFuncs = 2;
};
