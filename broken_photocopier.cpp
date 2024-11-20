// The bloody photocopier is broken... Just as you were sneaking around the office to print off your favourite binary code!

// Instead of copying the original, it reverses it: '1' becomes '0' and vice versa.

// Given a string of binary, return the version the photocopier gives you as a string.


#include <string>

std::string broken(const std::string& inp) {
  std::string result = inp;
  
  for (char& el : result) {
    if (el == '0') {
      el = '1';
    } else if (el == '1') {
      el = '0';
    }
  }
  
  return result;
}
