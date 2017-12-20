#include"espresso.h"
#include"house_blend.h"
#include "coffee_with_adds.h"
#include"roasted_black.h"
#include <conio.h>
#include <fstream>
list<pair<string, int>> count_adds(istream& fin)
{
	string add;
	list<pair<string, int>> res;
	int num;
	while (!fin.eof())
	{
		fin >> add;
		fin >> num;
		if (add == "milk" || add == "choco"|| add == "cream")
		{
			res.push_back(make_pair(add, num));
		}
	}
	return res;
	
}
drink* make_order(istream& fin, ofstream& bills, ofstream& exps)
{
	string buff;
	int num;
	drink *coffee;
	list<pair<string, int>> adds;
	fin >> buff;
	if (buff == "roasted")
	{
		coffee = new roasted_black();
		adds = count_adds(fin);
	}
	else if (buff == "espresso")
	{
		coffee = new espresso();
		adds = count_adds(fin);
	}
	else if (buff == "blend")
	{
		coffee = new house_blend();
		adds = count_adds(fin);
	}
	else
	{
		bills << "sorry, go fuck yourself";
	}
	drink* a = new coffee_with_adds(coffee);
	a.decorate(adds);
	
	unordered_map<string, int> e = a.get_expenses();
	for (auto it = e.begin(); it != e.end(); it++)
	{
		exps << it->first << " " << it->second;
	}
	pair<string, float> bill = a.get_bill();
	bills << bill.first << " " << bill.second;
	return a;

}


int main()
{
	ifstream fin("order1.txt");
	ifstream fin1("order2.txt");
	ofstream bills("bills.txt");
	ofstream exps("expenses.txt");
	list<drink> drinks;
	make_order(fin, bills, exps);
	make_order(fin1, bills, exps);
	_getch();
	return 0;
}
