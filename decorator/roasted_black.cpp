#include "roasted_black.h"



roasted_black::roasted_black()
{
	name = "roasted";
	expenses[name] = 1;
	price += menu[name];
}

unordered_map<string, int> roasted_black::get_expenses()
{
	return expenses;
}

pair<string, float> roasted_black::get_bill()
{
	return make_pair(this->name, this->price);
}




roasted_black::~roasted_black()
{
}
