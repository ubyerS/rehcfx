#pragma once
#include <string>
#include <vector>
#include "Container.h"
#include "Conveyor.h"

class ProductionLine
{
public:
    ProductionLine();
    void addContainer(std::string name, int maxCapacity);
    void removeContainer(int containerIndex);
    void addConveyor(std::string name);
    void removeConveyor(int conveyorIndex);
    void startConveyor(int conveyorIndex);
    void startProductionLine();
    bool hasEnoughMaterials(std::string containerName, int amountNeeded);
    void removeMaterials(std::string containerName, int amount);
    void addMaterials(std::string containerName, int amount);

private:
    std::vector<Container> containers;
    std::vector<Conveyor> conveyors;
};

