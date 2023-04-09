#pragma once
#include <string>
#include <vector>
#include "ProductionLine.h"

class Vehicle
{
public:
    Vehicle(std::string name, std::vector<std::string> containerNames, std::vector<int> amountsNeeded);
    bool hasEnoughMaterials(ProductionLine productionLine);
    void startProductionLine(ProductionLine productionLine);

private:
    std::string name;
    std::vector<std::string> containerNames;
    std::vector<int> amountsNeeded;
};