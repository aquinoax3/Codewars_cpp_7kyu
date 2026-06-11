// Given a string indicating a range of letters, return a string which includes all the letters in that range, including the last letter.
// Note that if the range is given in capital letters, return the string in capitals also!

// Examples

// "a-z" ➞ "abcdefghijklmnopqrstuvwxyz"
// "h-o" ➞ "hijklmno"
// "Q-Z" ➞ "QRSTUVWXYZ"
// "J-J" ➞ "J"
// Notes

// A hyphen will separate the two letters in the string.
// You don't need to worry about error handling in this kata (i.e. both letters will be the same case and the second letter will not be before the first alphabetically).


#include <string>
#include <cctype>
#include <iostream>

std::string gimme_the_letters(const std::string& sp) {
  if (sp[0] == sp[2]) {
    char ch = sp[0];
    std::string str(1, ch);
    return str;
  }
  
  std::string alphaLow = "abcdefghijklmnopqrstuvwxyz";
  std::string alphaCap = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
  std::string result = "";
  result += sp[0];
  
  for (int i = 0; i < alphaLow.size(); i++) {
    if (alphaLow[i] == sp[0]) {
        while (alphaLow[i] != sp[2]) {
          result += alphaLow[i + 1];
          i++;
        }      
    } else if (std::toupper(alphaLow[i]) == sp[0]) {
      while (std::toupper(alphaLow[i]) != sp[2]) {
          char upper = std::toupper(alphaLow[i + 1]);
          result += upper;
          i++;
        }      
    }
  }
  
  
  return result;
}
