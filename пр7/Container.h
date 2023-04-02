#pragma once
#include <string>
#include <vector>

class Container
{
public:
    Container(std::string name, int maxCapacity);
    void addMaterial(int amount);
    void removeMaterial(int amount);
    bool hasEnoughMaterials(int amountNeeded);
    std::string getName();
    int getCurrentCapacity();
    int getMaxCapacity();

private:
    std::string name;
    int maxCapacity;
    int currentCapacity;
};