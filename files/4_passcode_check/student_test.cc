#include <iostream>
#include <string>
#include <map>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(PasscodeCheck, Test1) {
  std::string passcode = "123123ab";
  int expected_score = 2;
  EXPECT_EQ(PasscodeCheck(passcode), expected_score);
}

TEST(PasscodeCheck, Test2) {
  std::string passcode = "123123";
  int expected_score = 1;
  EXPECT_EQ(PasscodeCheck(passcode), expected_score);
}

TEST(PasscodeCheck, Test3) {
  std::string passcode = "123123aZ";
  int expected_score = 3;
  EXPECT_EQ(PasscodeCheck(passcode), expected_score);
}
