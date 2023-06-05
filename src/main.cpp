#include <iostream>
#include <memory>
#include <vector>
#include <string>

#include "developer.hpp"

auto main() -> int
{
    JuniorDeveloper jun_dev("Dennis Dick", "DoubleD");
    SeniorDeveloper sen_dev("Luca Diener", "LD");

    /*
        initializing vector which will be filled with shared pointer each pointing on a child class of Developer
    */
   
    std::vector<std::shared_ptr<Developer>> vector_developer;

    /*
        initializing shared pointer for Senior and Junior Developer
    */
    std::shared_ptr<Developer> ptr_SeniorDeveloper = std::make_shared<SeniorDeveloper>(sen_dev);
    std::shared_ptr<Developer> ptr_JuniorDeveloper = std::make_shared<JuniorDeveloper>(jun_dev);

    /*
        filling vector with shared pointers
    */
    vector_developer.push_back(ptr_SeniorDeveloper);
    vector_developer.push_back(ptr_JuniorDeveloper);

    /*
        iterator goes through vector and each object solves a problem
    */
    for (auto &itr : vector_developer)
    {
        itr->solve_problem();
    }

    return 0;

}