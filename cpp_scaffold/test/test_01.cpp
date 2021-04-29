#include <gtest/gtest.h>
#include "lib.h"

// Fixture
class numbersTest : public ::testing::Test
{
  protected:
    numbers n0_;

};



TEST_F(numbersTest, initialize) {
  ASSERT_NE(&n0_, nullptr) << "Not equal to null pointer";
}

TEST_F(numbersTest, AddNumbers) {
  ASSERT_EQ(n0_.AddTwoNumbers(1,2), 3);
}
