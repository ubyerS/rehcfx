#include "ProductionLine.h"

ProductionLine::ProductionLine()
{
}

void ProductionLine::addContainer(std::string name, int maxCapacity)
{
}

void ProductionLine::removeContainer(int containerIndex)
{
}

void ProductionLine::addConveyor(std::string name)
{
}

void ProductionLine::removeConveyor(int conveyorIndex)
{
}

void ProductionLine::startConveyor(int conveyorIndex)
{
}

void ProductionLine::startProductionLine()
{
}

bool ProductionLine::hasEnoughMaterials(std::string containerName, int amountNeeded)
{
	return false;
}

void ProductionLine::removeMaterials(std::string containerName, int amount)
{
}

void ProductionLine::addMaterials(std::string containerName, int amount)
{
}
