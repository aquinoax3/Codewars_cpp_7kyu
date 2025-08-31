// Task
// Let's call a string cool if it is formed only by Latin letters and no two lowercase and no two uppercase letters are in adjacent positions. Given a string, check if it is cool.

// Input/Output
// [input] string s

// A string that contains uppercase letters, lowercase letters numbers and spaces.

// 1 ≤ s.length ≤ 20.

// [output] a boolean value

// true if s is cool, false otherwise.

// Example
// For s = "aQwFdA", the output should be true

// For s = "aBC", the output should be false;

// For s = "AaA", the output should be true;

// For s = "q q", the output should be false.


#include <string>

bool cool_string(const std::string& s) {
  
  for (int i = 0; i < s.size() - 1; i++) {
    if (isdigit(s[i]) || !isalpha(s[i]) ) {
      return false;
    }
    
    if (s[i] == std::tolower(s[i]) && s[i + 1] == std::tolower(s[i + 1])) {
      return false;
    }
    
    
    if (s[i] == std::toupper(s[i]) && s[i + 1] == std::toupper(s[i + 1])) {
      return false;
    }
  }
  
  return true;
}
