// Given a non-negative integer, return an array / a list of the individual digits in order.

// Examples:

// 123 => {1,2,3}

// 1 => {1}

// 8675309 => {8,6,7,5,3,0,9}


#include <vector>
#include <iostream>

std::vector<int> digitize(int n) {
  std::vector<int> result;
  
  for (char el : std::to_string(n)) {
    result.push_back(el -  '0');
  }
  
  return result;
}
