// Your task is very simple. Given an input string s, case_sensitive(s), check whether all letters are lowercase or not. Return True/False and a list of all the entries that are not lowercase in order of their appearance in s.

// For example, case_sensitive('codewars') returns [True, []], but case_sensitive('codeWaRs') returns [False, ['W', 'R']].

// Goodluck :)

// Have a look at my other katas!



#include <utility>
#include <string>
#include <vector>

std::pair<bool, std::vector<char>> caseSensitive(const std::string& str) {
  // declare a pair with bool, and vec of char
  std::pair<bool, std::vector<char>> result;
  
  // iterate through the string, if char is upper case add to vector
  for (char el : str) {
    if (std::isalpha(el) && el == std::toupper(el)) {
      result.second.push_back(el);
    }
  }

  // if vector is empty set the pair.first to true
 if (result.second.empty()) {
    result.first = true;
  } 
  
  return result;
}
