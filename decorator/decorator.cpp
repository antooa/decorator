#include "decorator.h"



decorator::decorator()
{
}

decorator::decorator(drink* to_decor)
{
	with_adds = to_decor;	
	
}

//unordered_map<string, int> decorator::get_expences()
//{
//	return this->expences;
//}




decorator::~decorator()
{
}
