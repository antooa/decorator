#include "house_blend.h"



house_blend::house_blend()
{
	name = "blend";
	expenses[name] = 1;
	price += menu[name];
}

unordered_map<string, int> house_blend::get_expenses()
{
	return expenses;
}

pair<string, float> house_blend::get_bill()
{
	return make_pair(this->name, this->price);
}




house_blend::~house_blend()
{
}
