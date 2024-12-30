// When provided with a String, capitalize all vowels

// For example:

// Input : "Hello World!"

// Output : "HEllO WOrld!"

// Note: Y is not a vowel in this kata.



#include <string>

std::string swap(const std::string& str) {
  std::string result = str;
  std::string vowels = "aeiouAEIOU";
  for (char& el : result) {
    if (vowels.find(el) != std::string::npos) {
      if (islower(el)) {
        char upper = toupper(el);
        el = upper;
        std::cout << el << std::endl;
      }
    
    }
  }
    return result;
}
