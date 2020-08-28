/**
 * @author      : worldpotato (worldpotato)
 * @file        : main
 * @created     : Thursday Aug 27, 2020 19:22:44 CEST
 */

#include "mrMeeseeks.hpp"
#include <iostream>

int main()
{

    std::function<bool(int&, int)> task;
    int currentStatus = 0;
    int wantedResult = 10;
    mrMeeseeks mrMeeseeks;

    task = [](int& currentStatus, int wantedResult) {
        currentStatus++;
        return currentStatus == wantedResult;
    };

    mrMeeseeks.doTask(task, currentStatus, wantedResult);

    return 0;
}

