// Find the number with the most digits.

// If two numbers in the argument array have the same number of digits, return the first one in the array.


#include <vector>
#include <iostream>

int findLongest(const std::vector<int>& numbers) {
  std::vector<std::pair<int,int>> intToStr;
  
  for (int num : numbers) {
    std::pair<int,int> sizeAndNum = {std::to_string(num).size(), num};
    intToStr.push_back(sizeAndNum);
  }
  
  int max = 0;
  int maxNum;
  
  for (std::pair<int,int> pair : intToStr) {
    if (pair.first > max) {
      max = pair.first;
      maxNum = pair.second;
    }
   
  }
  
  return maxNum;
}


