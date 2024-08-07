// In this Kata, you will be given an array of numbers in which two numbers occur once and the rest occur only twice. Your task will be to return the sum of the numbers that occur only once.

// For example, repeats([4,5,7,5,4,8]) = 15 because only the numbers 7 and 8 occur once, and their sum is 15. Every other number occurs twice.

// More examples in the test cases.

// Good luck!

// If you like this Kata, please try:

// Sum of prime-indexed elements

// Sum of integer combinations


#include <unordered_map>
#include <iostream>

int repeats(std::vector<int>v){
  std::unordered_map<int, int> map;
  int sum = 0;
  
  for(auto num : v) {
      map[num]++;
  }
  
  for (auto i = map.begin(); i != map.end(); i++) {
    if(i->second == 1) {
      sum += i->first;
    }
  }
  
  return sum;
}
