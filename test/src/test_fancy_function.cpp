#include <gtest/gtest.h>
#include <fancy_function.h>

TEST(FancyFunction_BeFancy, BasicAssertions) {
  auto ff = fancy_function();

  EXPECT_STREQ(ff.be_fancy(666).c_str(), "I am fancy one a level of 666");
}
