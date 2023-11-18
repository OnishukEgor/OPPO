#include "utils.h"
#include <fstream>
#include <sstream>

void PrintData(const vector<FuelCost>& data)
{
    for (const auto& entry : data)
    {
        entry.Print(cout);
        cout << "\n";
    }
}

vector<FuelCost> ReadDataFromFile(const string& fileName) // std::istream

{
    vector<FuelCost> VectorFuel;
    ifstream in(fileName);

    if (!in)
    {
        cout << "Opening file error\n";
        return VectorFuel;
    }

    string line;
    while (getline(in, line))
    {
        FuelCost fuel = FuelCost::Create(in, line);
        VectorFuel.push_back(fuel);
    }

    in.close();
    return VectorFuel;

}