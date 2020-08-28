/**
 * @author      : worldpotato
 * @file        : mrMeeseeks
 * @created     : Thursday Aug 27, 2020 19:23:51 CEST
 */

#ifndef MRMEESEEKS_HPP

#define MRMEESEEKS_HPP

#include <functional>
#include <iostream>

class mrMeeseeks {
public:
    mrMeeseeks();
    auto doTask(std::function<bool(int& currentStatus, int wantedResult)>& task, int currentStatus, int wantedResult) -> void;
    auto getSad() -> void;
    auto stopExisting() -> void;

    virtual ~mrMeeseeks();

private:
    std::function<int(const int)> task;
};

#endif /* end of include guard MRMEESEEKS_HPP */

