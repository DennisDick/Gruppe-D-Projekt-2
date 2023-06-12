#include "developer.hpp"
#include "gtest/gtest.h"

class DeveloperTest : public ::testing::Test
{
   protected:
    /*
        initialzing to test developer with their respective constructor
    */
    JuniorDeveloper test_junior_developer_ = JuniorDeveloper("Test Junior", "alias junior test");
    SeniorDeveloper test_senior_developer_ = SeniorDeveloper("Test Senior", "alias senior test");
};

TEST_F(DeveloperTest, GetJunior)
{
    /*
        testing if getter functions return the right name/alias of test junior developer
    */
    EXPECT_EQ(test_junior_developer_.get_developer_name(), "Test Junior");
    EXPECT_EQ(test_junior_developer_.get_developer_alias(), "alias junior test");
}

TEST_F(DeveloperTest, GetSenior)
{
    /*
        testing if getter funtions return the right name/alias of test senior developer
    */
    EXPECT_EQ(test_senior_developer_.get_developer_name(), "Test Senior");
    EXPECT_EQ(test_senior_developer_.get_developer_alias(), "alias senior test");
}
