// n this kata you have to find whether same elements of the string are grouped together.

// Example

// Input	Output
// 112233	true
// 11223311	false

// Explanation
// In first example same elements are grouped together: (11)(22)(33), hence it should return true
// In the second example there are two different groups of 1's: (11)2233(11), hence it should return false


#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isConsecutive(std::string s){
    for (int i = 1; i < s.size(); i++) {
      if (s[i - 1] != s[i]) {
        if (s.find(s[i - 1], i) != std::string::npos) {
          return false;
        }
      }
    }
  
  return true;
}
