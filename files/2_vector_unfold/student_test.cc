#include <vector>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(VectorUnfold, Test1) {
  std::vector<char> chars = {'a', 'b', 'c'};
  std::vector<size_t> times = {1, 0, 2};
  
  std::vector<char> expected = {'a', 'c', 'c'};
  EXPECT_EQ(Unfold(chars, times), expected);
}
