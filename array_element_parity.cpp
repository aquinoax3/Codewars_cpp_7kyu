// In this Kata, you will be given an array of integers whose elements have both a negative and a positive value, except for one integer that is either only negative or only positive. Your task will be to find that integer.

// Examples:

// [1, -1, 2, -2, 3] => 3

// 3 has no matching negative appearance

// [-3, 1, 2, 3, -1, -4, -2] => -4

// -4 has no matching positive appearance

// [1, -1, 2, -2, 3, 3] => 3

// (the only-positive or only-negative integer may appear more than once)

// Good luck!


#include <unordered_set>

int solve (std::vector<int> v){
  std::unordered_set<int> parity(v.begin(), v.end());
  int missing;
  
  for (int num : v) {
    if (num > 0 && parity.find(num * -1) == parity.end()) {
        missing = num;
    }
    if (num < 0 && parity.find(num * -1) == parity.end()) {
        missing = num;
    }
  }
  
  return missing;
}
