// Task
// Given a list of digits, return the smallest number that could be formed from these digits, using the digits only once (ignore duplicates).

// Notes:
// Only positive integers will be passed to the function (> 0 ), no negatives or zeros.
// Input >> Output Examples
// minValue ({1, 3, 1})  ==> return (13)
// Explanation:
// (13) is the minimum number could be formed from {1, 3, 1} , Without duplications

// minValue({5, 7, 5, 9, 7})  ==> return (579)
// Explanation:
// (579) is the minimum number could be formed from {5, 7, 5, 9, 7} , Without duplications

// minValue({1, 9, 3, 1, 7, 4, 6, 6, 7}) return  ==> (134679)
// Explanation:
// (134679) is the minimum number could be formed from {1, 9, 3, 1, 7, 4, 6, 6, 7} , Without duplications


#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std; 

unsigned long long minValue (vector <int> values) {
  std::unordered_set<int> noDupes(values.begin(), values.end());
  std::vector<int> sortedVec(noDupes.begin(), noDupes.end());
  std::sort(sortedVec.begin(), sortedVec.end());
  
  unsigned long long result = 0;
  
  for (int num : sortedVec) {
   result = result * 10 + num;
  }
  
 return result; 
}
