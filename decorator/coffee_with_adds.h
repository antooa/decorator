#pragma once
#include "decorator.h"
class coffee_with_adds :
	public decorator
{
public:
	coffee_with_adds(drink* to_decor) :decorator(to_decor) {}
	void decorate(list<pair<string, int>> adds);
	unordered_map<string, int> get_expenses();
	pair<string, float> get_bill();
	~coffee_with_adds();
};

