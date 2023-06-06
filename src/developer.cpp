#include "developer.hpp"

#include <iostream>

Developer::Developer(const std::string var_developer_name, const std::string var_developer_alias)
{
    developer_name_ = var_developer_name;
    developer_alias_ = var_developer_alias;
};

void Developer::drink_coffee()
{
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
};

auto Developer::get_developer_name() -> std::string
{
    return developer_name_;
};

auto Developer::get_developer_alias() -> std::string
{
    return developer_alias_;
};

auto operator<<(std::ostream& out, Developer& developer) -> std::ostream&
{
    out << "Name: " << developer.get_developer_name() << std::endl;
    out << "Alias: " << developer.get_developer_alias() << std::endl;
    return out;
}

void JuniorDeveloper::solve_problem()
{
    std::cout << *this << "I am a junior developer and i am solving a problem" << std::endl;
    Developer::drink_coffee();
}

JuniorDeveloper::JuniorDeveloper(const std::string var_developer_name, const std::string var_developer_alias) : Developer(var_developer_name, var_developer_alias)
{

}

SeniorDeveloper::SeniorDeveloper(const std::string var_developer_name, const std::string var_developer_alias) : Developer(var_developer_name, var_developer_alias)
{

}


void SeniorDeveloper::solve_problem()
{
    std::cout << *this << "I am a senior developer and i am solving a problem" << std::endl;
    Developer::drink_coffee();
}
