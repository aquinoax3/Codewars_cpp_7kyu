// Given two arrays of strings, return the number of times each string of the second array appears in the first array.

// Example
// array1 = ['abc', 'abc', 'xyz', 'cde', 'uvw']
// array2 = ['abc', 'cde', 'uap']
// How many times do the elements in array2 appear in array1?

// 'abc' appears twice in the first array (2)
// 'cde' appears only once (1)
// 'uap' does not appear in the first array (0)
// Therefore, solve(array1, array2) = [2, 1, 0]



#include <unordered_map>

std::vector<int> solve(std::vector<std::string>a , std::vector<std::string> b){
  std::unordered_map<std::string, int> map;
  std::vector<int> result;
  
  for (std::string el : a) {
       map[el]++;
  }
  
  for (std::string el : b) {
    if (map.find(el) != map.end()) {
      result.push_back(map[el]);
    } else {
      result.push_back(0);
    }
  }
  
  return result;
}
