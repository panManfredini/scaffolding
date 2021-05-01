#include <gtest/gtest.h>
#include "dummy.h"

// Fixture
class dummyTest : public ::testing::Test
{
  protected:
    dummy n0_;

};



TEST_F(dummyTest, initialize) {
  ASSERT_NE(&n0_, nullptr) << "Not equal to null pointer";
}

TEST_F(dummyTest, AddNumbers) {
  ASSERT_EQ(n0_.AddTwoNumbers(1,2), 3);
}
