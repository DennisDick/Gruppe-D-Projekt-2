#ifndef DEVELOPER_HPP_85v9zwe9evm
#define DEVELOPER_HPP_85v9zwe9evm

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

    /*
        static function can not be changed, it is only used for output
    */
    static void drink_coffee();

    auto get_developer_name() -> const std::string;
    auto get_developer_alias() -> const std::string;

    /*
        using a virtual void function to force derived classes of Developer to implement that function
    */
    virtual void solve_problem() = 0;
};

/*
    implementing the JuniorDeveloper class, which is derived from Developer class
*/
class JuniorDeveloper : public Developer
{
   public:
    /*
         building constructor of JuniorDeveloper and securing that no implicit cast is possible in the initialization
    */
    explicit JuniorDeveloper(std::string, std::string);

    /*
        initializing the virtual method from parent class
    */
    void solve_problem() override;
};

/*
    implementing the SeniorDeveloper class, which is derived from Developer class
*/
class SeniorDeveloper : public Developer
{
   public:
    /*
         building constructor of SeniorDeveloper and securing that no implicit cast is possible in the initialization
    */
    explicit SeniorDeveloper(std::string, std::string);

    /*
        initializing the virtual method from parent class
    */
    void solve_problem() override;
};

/*
        overloading the "<<" operator and standardizing output of Developer
*/
auto operator<<(std::ostream& out, const Developer&) -> std::ostream&;

#endif
