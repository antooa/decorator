#pragma once
#include "drink.h"
#include "menu.h"
class decorator :
	public drink
{

protected:
	drink* with_adds;
public:
	decorator();
	decorator(drink* to_decor);

	//unordered_map<string, int> get_expences();
	virtual void decorate(list<pair<string, int>> adds);
	virtual unordered_map<string, int> get_expenses();
	
	~decorator();
};

