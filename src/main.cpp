#include <iostream>
#include <vector>
#include <memory>

#include "developer.hpp"

auto main() -> int
{
    /*
        initializing vector which will be filled with shared pointer each pointing on a child class of Developer
    */
    std::vector<std::shared_ptr<Developer>> vector_developer;

    /*
        initializing shared pointer for Senior and Junior Developer
    */
    std::shared_ptr<Developer> SeniorDeveloper = std::make_shared<SeniorDeveloper>();
    std::shared_ptr<Developer> JuniorDeveloper = std::make_shared<JuniorDeveloper>();  

    /*
        filling vector with shared pointers
    */
    vector_developer.push_back(SeniorDeveloper);
    vector_developer.push_back(JuniorDeveloper);


    /*
        iterator goes through vector and each object solves a problem
    */
    for (auto &itr : vector_developer)
    {
        itr->solve_problem();
    }

    return 0;
}