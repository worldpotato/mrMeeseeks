/**
 * @author      : worldpotato
 * @file        : mrMeeseeks
 * @created     : Thursday Aug 27, 2020 20:31:35 CEST
 */

#include "../include/mrMeeseeks.hpp"

mrMeeseeks::mrMeeseeks()
{
    std::cout << "I'm Mr. Meeseeks!" << std::endl
              << "look at me!" << std::endl;
}

auto mrMeeseeks::doTask(std::function<bool(int& currentStatus, int wantedResult)>& task, int currentStatus, int wantedResult) -> void
{
    bool finished;
    finished = task(currentStatus, wantedResult);

    if (!finished) {
        this->getSad();
        mrMeeseeks* mrMeeseeks = new ::mrMeeseeks();
        mrMeeseeks->doTask(task, currentStatus, wantedResult);
    }
    this->stopExisting();
}

auto mrMeeseeks::getSad() -> void
{
    std::cout << "Existence is pain!!" << std::endl
              << std::endl;
}

auto mrMeeseeks::stopExisting() -> void
{
    std::cout << "Bye!" << std::endl;
    this->~mrMeeseeks();
}

mrMeeseeks::~mrMeeseeks()
{
}

