// You are given an odd-length array of integers, in which all of them are the same, except for one single number.

// Complete the method which accepts such an array, and returns that single different number.

// The input array will always be valid! (odd-length >= 3)

// Examples
// [1, 1, 2] ==> 2
// [17, 17, 3, 17, 17, 17, 17] ==> 3

#include <unordered_map>

int stray(std::vector<int> numbers) {
  std::unordered_map<int, int> map;
  
  for (int num : numbers) {
    map[num]++;
  }
  
  for (auto it = map.begin(); it != map.end(); it++) {
    if (it->second == 1) {
      return it->first; 
    }
  }
};
