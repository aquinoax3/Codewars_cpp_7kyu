// Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

// Examples:
// Input: 42145 Output: 54421

// Input: 145263 Output: 654321

// Input: 123456789 Output: 987654321


#include <cinttypes>
#include <algorithm>
#include <cstdint>

uint64_t descendingOrder(uint64_t a) {
  std::string str = std::to_string(a);
  std::sort(str.begin(),str.end(),std::greater<int>());
  
  uint64_t value = std::stoull(str);
  
  return value;
}
