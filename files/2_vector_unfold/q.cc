#include <vector>

#include "q.h"

// Implement each function of `q.h` here.

std::vector<char> Unfold(const std::vector<char>& chars, const std::vector<size_t>& times) {
  std::vector<char> res;

  for (size_t i = 0; i < chars.size(); ++i) {
    for (size_t j = 0; j < times[i]; ++j) {
      // something may be wrong here.
      res.push_back(chars[i]);
    }
  }

  return res;
}