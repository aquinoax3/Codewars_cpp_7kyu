// Given 2 strings, a and b, return a string of the form: shorter+reverse(longer)+shorter.

// In other words, the shortest string has to be put as prefix and as suffix of the reverse of the longest.

// Strings a and b may be empty, but not null (In C# strings may also be null. Treat them as if they are empty.).
// If a and b have the same length treat a as the longer producing b+reverse(a)+b




#include <string>

std::string reverse(std::string word) {
  std::string result = "";
  
  for (int i = word.size() - 1; i >= 0; i--) {
    result += word[i];
  }
  
  return result;
}


std::string shorter_reverse_longer(const std::string& a, const std::string& b) {
  int strSizeA = a.size();
  int strSizeB = b.size();
  
  if (strSizeA == strSizeB || strSizeA > strSizeB) {
    return b + reverse(a) + b;
  } else {
    return a + reverse(b) + a;
  }

}
