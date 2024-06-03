// An element in an array is dominant if it is greater than all elements to its right. You will be given an array and your task will be to return a list of all dominant elements. For example:

// solve([1,21,4,7,5]) = [21,7,5] because 21, 7 and 5 are greater than elments to their right. 
// solve([5,4,3,2,1]) = [5,4,3,2,1]

// Notice that the last element is always included. All numbers will be greater than 0.
// More examples in the test cases.

// Good luck!


#include <vector>
#include <algorithm>

std::vector<int> solve(std::vector<int> array){
  std::vector<int> result;
  
  for (int i = 0; i < array.size(); i++) {
    if (array[i] > array[i + 1] && std::find(result.begin(), result.end(), array[i]) != result.end()) {
         result.push_back(array[i]);
    }
  }
  
  for (auto num : result) {
    std::cout << num << std::endl;
  }
}
