#ifndef DEVELOPER_HPP_
#define DEVELOPER_HPP_

#include <iostream>

class Developer
{
   protected:
    std::string developer_name_;
    std::string developer_alias_;

   public:
    /*
         defining a explicit constructor which only allows strings as an input
    */
    explicit Developer(std::string, std::string);

    static void drink_coffee();

    auto get_developer_name() -> std::string;
    auto get_developer_alias() -> std::string;

    /*
        using a virtual void function to force derived classes of Developer to implement that function
    */
    virtual void solve_problem() = 0;
};

class JuniorDeveloper : public Developer
{
   public:
    explicit JuniorDeveloper(std::string, std::string);

    void solve_problem() override;
};

class SeniorDeveloper : public Developer
{
   public:
    explicit SeniorDeveloper(std::string, std::string);

    void solve_problem() override;
};

auto operator<<(std::ostream& out, const Developer&) -> std::ostream&;

#endif
