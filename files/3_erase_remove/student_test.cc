#include <vector>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(EraseRemove, Test1) {
  std::vector<int> numbers = {312, 315, 5, 2, 7, 4, 7, 9, 558, 538};
  RemoveOddNumber(numbers);
  
  std::vector<int> expected = {312, 2, 4, 558, 538};
  EXPECT_EQ(numbers, expected);
}
