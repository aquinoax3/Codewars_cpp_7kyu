// Your task is very simple. Given an input string s, case_sensitive(s), check whether all letters are lowercase or not. Return True/False and a list of all the entries that are not lowercase in order of their appearance in s.

// For example, case_sensitive('codewars') returns [True, []], but case_sensitive('codeWaRs') returns [False, ['W', 'R']].

// Goodluck :)

// Have a look at my other katas!



#include <utility>
#include <string>
#include <vector>

std::pair<bool, std::vector<char>> caseSensitive(const std::string& str) {
  // declare a pair with bool, and vec of char
  // iterate through the string, if char is upper case add to vector
  // if vector is not empty set the pair.first to true
  // return pair
  return { true, {} };
}
