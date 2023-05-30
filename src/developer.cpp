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