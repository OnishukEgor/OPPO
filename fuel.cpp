#include "fuel.h"
#include "date.h"
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

void FuelCost::PrintTypeFuel(std::ostream& out) const
{
	out << "Тип топлива: " << type_fuel << " ";
}

void FuelCost::PrintPrice(std::ostream& out) const
{
	out << "Цена топлива: " << price << " ";
}

void FuelCost::Print(ostream&) const
{
	PrintTypeFuel(cout);
	PrintPrice(cout);
	date.PrintDate(cout);
}

FuelCost FuelCost::Create(istream& in, string line)
{
    FuelCost fuel;

    istringstream Stream(line);

    Stream >> fuel.type_fuel;
    fuel.date = Date::Create(Stream); 
    Stream >> fuel.price;

	return fuel;
}