#pragma once
#include "date.h"
#include "fuel.h"
#include <vector>

vector<FuelCost> ReadDataFromFile(const string& fileName);
void PrintData(const vector<FuelCost>& data);