// Given a sequence of integers, return the sum of all the integers that have an even index (odd index in COBOL), multiplied by the integer at the last index.

// Indices in sequence start from 0.

// If the sequence is empty, you should return 0.


#include <vector>

int even_last(std::vector<int> nums) {
  if(nums.size() == 0) return false;
  int even = 0;
  
  for (int i = 0; i < nums.size(); i++){
    if (i % 2 == 0) {
      even += nums[i];
    }
  }
  
  return even * nums.back();
}
