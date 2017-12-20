#include "coffee_with_adds.h"






void coffee_with_adds::decorate(list<pair<string, int>> adds)
{
	for (pair<string, int> add : adds)
	{
		for (int i = 0; i < add.second; i++)
		{
			price += menu[add.first];

		}
		expenses[add.first] = add.second;
	}
}

unordered_map<string, int> coffee_with_adds::get_expenses()
{
	return expenses;
}

pair<string, float> coffee_with_adds::get_bill()
{
	return make_pair(this->name, this->price);
}



coffee_with_adds::~coffee_with_adds()
{
}
