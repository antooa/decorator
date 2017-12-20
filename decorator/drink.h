#pragma once
#include <iostream>
#include <string>
#include <list>
#include "menu.h"
using namespace std;
 class drink
{


protected:
	unordered_map<string, int> expenses;
	string name;
	float price = 0;
	virtual pair<string, float> get_bill();
	virtual unordered_map<string, int> get_expenses();
};

