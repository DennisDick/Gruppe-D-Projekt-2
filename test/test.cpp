#include <string>

#include "developer.hpp"
#include "gtest/gtest.h"

class DeveloperTest : public ::testing::Test
{
   protected:
    /*
         initializing two strings to test constructor in two different ways
    */
    std::string test_junior_name = "Test Junior name";
    std::string test_junior_alias = "Test Junior alias";

    std::string test_senior_name = "Test Senior name";
    std::string test_senior_alias = "Test Senior alias";

    /*
        initialzing to test developer with their respective constructor
    */
    JuniorDeveloper test_junior_developer_ = JuniorDeveloper(test_junior_name, test_junior_alias);
    SeniorDeveloper test_senior_developer_ = SeniorDeveloper("Test Senior name", "Test Senior alias");
};

TEST_F(DeveloperTest, GetJunior)
{
    /*
        - testing if getter functions return the right name/alias of test junior developer
        - by comparing the outputs in different ways, we make sure that every way of using the constructor is possible
    */
    EXPECT_EQ(test_junior_developer_.get_developer_name(), "Test Junior name");
    EXPECT_EQ(test_junior_developer_.get_developer_alias(), test_junior_alias);
}

TEST_F(DeveloperTest, GetSenior)
{
    /*
        - testing if getter funtions return the right name/alias of test senior developer
        - by comparing the outputs in different ways, we make sure that every way of using the constructor is possible
    */
    EXPECT_EQ(test_senior_developer_.get_developer_name(), test_senior_name);
    EXPECT_EQ(test_senior_developer_.get_developer_alias(), "Test Senior alias");
}
