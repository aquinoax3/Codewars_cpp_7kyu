// A non-empty array a of length n is called an array of all possibilities if it contains all numbers between 0 and a.length - 1 (both inclusive).

// Write a function that accepts an integer array and returns true if the array is an array of all possibilities, else false.

// Examples:

// [1,2,0,3] => True
// # Includes all numbers between 0 and a.length - 1 (4 - 1 = 3)

// [0,1,2,2,3] => False
// # Doesn't include all numbers between 0 and a.length - 1 (5 - 1 = 4)

// [0] => True
// # Includes all numbers between 0 and a.length - 1 (1 - 1 = 0).



#include <vector>

bool isAllPossibilities(std::vector<int> arr){
  // Create vector to store range of numbers
  std::vector<int> refNum;
  // iterate through the range of numbers and add them to vector
  for (int i = 0; i <= arr.size() - 1; i++) {
    refNum.push_back(i);
  }

  // sort both arrays
  std::sort(arr.begin(), arr.end());
  std::sort(refNum.begin(), refNum.end());
  
  // after being sorted if they are equal then you have an array of possibilities   
  return arr == refNum;
}
