#pragma once
#include "drink.h"
class roasted_black :
	public drink
{
	  
public:
	roasted_black();
	unordered_map<string, int> get_expenses();
	pair<string, float> get_bill();
	~roasted_black();
};

