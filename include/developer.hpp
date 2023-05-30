#ifndef DEVELOPER_HPP_
#define DEVELOPER_HPP_

#include <cstdint>
#include <iostream>

class Developer
{
    private:
        std::string developer_name_;
        std::string developer_alias_;

    public:
        explicit Developer(std::string, std::string);
        static void drink_coffee();

        auto get_developer_name() -> std::string;
        auto get_developer_alias() -> std::string;

        virtual void solve_problem() = 0;

}; 

#endif
