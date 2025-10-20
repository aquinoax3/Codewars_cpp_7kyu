// Find the number with the most digits.

// If two numbers in the argument array have the same number of digits, return the first one in the array.



#include <vector>
#include <iostream>

int findLongest(const std::vector<int>& numbers) {
  std::vector<std::string> intToStr;
  
  for (int num : numbers) {
    intToStr.push_back(std::to_string(num));
  }
  
  
  for (std::string num : intToStr){
    std::cout << num << std::endl;
  }
  
  return 0;
}


