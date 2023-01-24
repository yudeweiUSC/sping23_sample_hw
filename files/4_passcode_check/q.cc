#include <string>
#include <vector>
#include <functional>
#include <algorithm>

#include "q.h"

// Implement each function of `q.h` here.

int PasscodeCheck(const std::string& passcode) {
  const std::vector<std::function<bool(char)>> conditions = {
    [](const auto& c) { return c <= '9' && c >= '0'; },
    [](const auto& c) { return c <= 'z' && c >= 'a'; },
    [](const auto& c) { return c <= 'Z' && c >= 'A'; },
  };

  return std::count_if(conditions.begin(), conditions.end(), [&passcode](const auto& condition) {
    return std::any_of(passcode.begin(), passcode.end(), condition);
  });
}