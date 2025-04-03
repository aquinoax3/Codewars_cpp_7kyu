// Imagine you start on the 5th floor of a building, then travel down to the 2nd floor, then back up to the 8th floor. You have travelled a total of 3 + 6 = 9 floors of distance.

// Given an array representing a series of floors you must reach by elevator, return an integer representing the total distance travelled for visiting each floor in the array in order.

// // simple examples
// [5,2,8] => 9
// [1,2,3] => 2
// [7,1,7,1] => 18

// // if two consecutive floors are the same,
// //distance travelled between them is 0
// [3,3] => 0

#include <vector>

int elevator_distance(std::vector<int> array) {
  int sum = 0;
  
  for (int i = 0; i < array.size(); i++) {
    if (array[i] > array[i + 1]) {
      int total = array[i] - array[i + 1]
      sum += total;
    } else {
      int total = array[i] + array[i + 1]
      sum += total;
    }
  }
  return sum;
}
