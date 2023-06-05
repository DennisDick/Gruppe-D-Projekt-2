#include "developer.hpp"
#include "gtest/gtest.h"


class DeveloperTest : public ::testing::Test {
protected:
        JuniorDeveloper test_junior_developer_ = JuniorDeveloper("Test Junior", "alias junior test");
        SeniorDeveloper test_senior_developer_ = SeniorDeveloper("Test Senior", "alias senior test");
};

TEST_F(DeveloperTest, GetJunior) {
    EXPECT_EQ(test_junior_developer_.get_developer_name(), "Test Junior");
    EXPECT_EQ(test_junior_developer_.get_developer_alias(), "alias junior test");
}

TEST_F(DeveloperTest, GetSenior) {
    EXPECT_EQ(test_senior_developer_.get_developer_name(), "Test Junior");
    EXPECT_EQ(test_senior_developer_.get_developer_alias(), "alias senior test");
}

