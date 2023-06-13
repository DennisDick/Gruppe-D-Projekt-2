#include "developer.hpp"

#include <iostream>

/*
    the constructor of Developer fills developer_name_ and developer_alias_ with their respective input
*/
Developer::Developer(const std::string var_developer_name, const std::string var_developer_alias)
{
    developer_name_ = var_developer_name;
    developer_alias_ = var_developer_alias;
};

/*
    output of static method drink_coffee is initialized
*/
void Developer::drink_coffee()
{
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
};

/*
    initializing both getter methods for "getting" developer_name_ and developer_alias_
*/
auto Developer::get_developer_name() -> const std::string
{
    return developer_name_;
};

auto Developer::get_developer_alias() -> const std::string
{
    return developer_alias_;
};

/*
    initializing constructors for derived classes
*/
JuniorDeveloper::JuniorDeveloper(const std::string var_developer_name, const std::string var_developer_alias) : Developer(var_developer_name, var_developer_alias)
{

}

SeniorDeveloper::SeniorDeveloper(const std::string var_developer_name, const std::string var_developer_alias) : Developer(var_developer_name, var_developer_alias)
{

}

/*
    the operator "<<" is overloaded and now it is possible to use "out" for output
*/
auto operator<<(std::ostream& out, Developer& developer) -> std::ostream&
{
    out << "Name: " << developer.get_developer_name() << std::endl;
    out << "Alias: " << developer.get_developer_alias() << std::endl;
    return out;
}

void JuniorDeveloper::solve_problem()
{
    std::cout << *this << "I am a junior developer and i am solving a problem" << std::endl;
    this->drink_coffee();
}

void SeniorDeveloper::solve_problem()
{
    std::cout << *this << "I am a senior developer and i am solving a problem" << std::endl;
    this->drink_coffee();
}
