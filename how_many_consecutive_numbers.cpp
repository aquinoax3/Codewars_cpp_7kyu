// Write a function that takes an array of unique integers and returns the minimum number of integers needed to make the values of the array consecutive from the lowest number to the highest number.

// Example
// [4, 8, 6] --> 2
// Because 5 and 7 need to be added to have [4, 5, 6, 7, 8]

// [-1, -5] --> 3
// Because -2, -3, -4 need to be added to have [-5, -4, -3, -2, -1]

// [1] --> 0
// []  --> 0


#include <vector>
#include <iostream>
#include <unordered_set>

int consecutive(const std::vector<int>& arr) {
  if (arr.size() == 0) {
    return 0;
  }
  
  int min = arr[0];
  int max = arr[0];
  std::unordered_set<int> seen(arr.begin(), arr.end());
  int result = 0;
  
  for (int num : arr) {
    if (num < min) {
      min = num;
    }
    if (num > max) {
      max = num;
    }
  }
  
  
  for (int i = min; i <= max; i++) {
    if (seen.find(i) == seen.end()) {
      result++;
    }
  }
    return result;
}
