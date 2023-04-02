#pragma once
#include <string>
#include <vector>
#include "Container.h"

class Conveyor
{
public:
    Conveyor(std::string name);
    void addStep(std::string stepName, int timeRequired, std::vector<std::string> inputContainerNames, std::vector<int> inputAmounts, std::string outputContainerName, int outputAmount);
    void removeStep(int stepIndex);
    void start();
    std::string getName();

private:
    std::string name;
    std::vector<std::string> stepNames;
    std::vector<int> timeRequired;
    std::vector<std::vector<std::string>> inputContainerNames;
    std::vector<std::vector<int>> inputAmounts;
    std::vector<std::string> outputContainerNames;
    std::vector<int> outputAmounts;
};