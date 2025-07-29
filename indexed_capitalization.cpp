// Given a string of lowercase letters and an array of integer indices, capitalize all letters at the given indices. If an index is beyond the string, it should be ignored.

// Examples:
// "abcdef", [1,2,5]     ==> "aBCdeF"
// "abcdef", [1,2,5,100] ==> "aBCdeF" // There is no index 100.
// Good luck!


#include <string>
#include <vector>
#include <iostream>

std::string capitalize(const std::string &s, const std::vector<int> &idxs) {
  std::string str = s;
  
  for (int i = 0; i < idxs.size(); i++) {
    char letter = std::toupper(str[idxs[i]]);
    str[idxs[i]] = letter;
  }
  
