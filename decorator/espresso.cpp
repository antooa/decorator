#include "espresso.h"



espresso::espresso()
{
	
	name = "espresso";
	
	expenses[name] = 1;
	price += menu[name];

}

pair<string, float> espresso::get_bill()
{
	return make_pair(this->name, this->price);
}



unordered_map<string, int> espresso::get_expenses()
{
	return expenses;
}



espresso::~espresso()
{
}
