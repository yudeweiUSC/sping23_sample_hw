#include <vector>
#include <algorithm>

#include "q.h"

// Implement each function of `q.h` here.

void RemoveOddNumber(std::vector<int>& numbers) {
  numbers.erase(std::remove_if(std::begin(numbers), std::end(numbers), [](int number) {
    return number % 2 == 1;
  }), std::end(numbers)); 
  return;
}