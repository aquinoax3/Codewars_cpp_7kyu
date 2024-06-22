// Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

// Examples input/output:

// XO("ooxx") => true
// XO("xooxx") => false
// XO("ooxXm") => true
// XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
// XO("zzoo") => false


#include <algorithm>
bool XO(const std::string& str) {
  std::string lower = str;
  std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
  int count_x = 0;
  int count_o = 0;
  
  for (auto letter : lower){
    if (letter == 'x') {
      count_x++;
    }
    if (letter == 'o') {
      count_o++;
    }
  }
  
  return count_x == count_o;
}
