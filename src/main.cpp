#include "developer.hpp"

#include <iostream>
#include <memory>
#include <string>
#include <vector>


auto main() -> int
{
    /*
        initializing and filling a SeniorDeveloper and a JuniorDeveloper class with a constructor
    */
    JuniorDeveloper junior_developer("Dennis Dick", "DoubleD");
    SeniorDeveloper senior_developer("Luca Diener", "LD");

    /*
        initializing vector which will be filled with shared pointer each pointing on a child class of Developer
    */
    std::vector<std::shared_ptr<Developer>> vector_developer;

    /*
        initializing shared pointer for Senior and Junior Developer
    */
    std::shared_ptr<Developer> ptr_senior_developer = std::make_shared<SeniorDeveloper>(senior_developer);
    std::shared_ptr<Developer> ptr_junior_developer = std::make_shared<JuniorDeveloper>(junior_developer);

    /*
        filling vector with shared pointers
    */
    vector_developer.push_back(ptr_senior_developer);
    vector_developer.push_back(ptr_junior_developer);

    /*
        iterator goes through vector and each object solves a problem
    */
    for (auto &itr_developer : vector_developer)
    {
        itr_developer->solve_problem();
    }

    return 0;
}
