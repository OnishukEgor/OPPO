#include "date.h"
#include <sstream>
#include <fstream>
using namespace std;

void Date::PrintDate(std::ostream& out) const
{
	out << "Дата: " << day << "." << month << "." << year;
}

Date Date::Create(std::istream& in)
{
	Date num;
    string date, day, month, year;
    in >> date;
    stringstream dateStream(date);
    getline(dateStream, date, '.');
    getline(dateStream, month, '.');
    getline(dateStream, year, '.');
    num.day = stoi(date);
    num.month = stoi(month);
    num.year = stoi(year);
	return num;
}