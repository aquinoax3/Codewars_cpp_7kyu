// Complete the function to find the count of the most frequent item of an array. You can assume that input is an array of integers. For an empty array return 0

// Example
// input array: [3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3]
// ouptut: 5 
// The most frequent number in the array is -1 and it occurs 5 times.



#include <vector>
#include <unordered_map>

unsigned int most_frequent_item_count(const std::vector<int>& collection) {
  if (collection.size() == 0) return 0;
  std::unordered_map<int, int> map;
  unsigned int max = 0;
  
  for (int el : collection) {
    map[el]++;
  }
  
  for (auto it = map.begin(); it != map.end(); it++) {
    if (it->second > max) {
      max = it->second;
    }
  }
  
  return max;
}
