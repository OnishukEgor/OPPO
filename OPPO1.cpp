#include "fuel.h"
#include "utils.h"
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    vector<FuelCost> VectorFuel = ReadDataFromFile("in.txt");
    PrintData(VectorFuel);
    return 0;
}