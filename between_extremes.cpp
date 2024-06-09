// Given an array of numbers, return the difference between the largest and smallest values.

// For example:

// [23, 3, 19, 21, 16] should return 20 (i.e., 23 - 3).

// [1, 434, 555, 34, 112] should return 554 (i.e., 555 - 1).

// The array will contain a minimum of two elements. Input data range guarantees that max-min will cause no integer overflow.


#include <vector>
#include <algorithm>

int betweenExtremes(const std::vector<int>& numbers) {
  std::vector<int> newArr = numbers;
  std::sort(newArr.begin(), newArr.end());
  
  return newArr.back() - newArr.front();
}
