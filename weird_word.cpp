// Change every letter in a given string to the next letter in the alphabet. The function takes a single parameter s (string).

// Notes:

// Spaces and special characters should remain the same.
// Capital letters should transfer in the same way but remain capitilized.
// Examples
// "Hello"               -->  "Ifmmp"
// "What is your name?"  -->  "Xibu jt zpvs obnf?"
// "zoo"                 -->  "app"
// "zzZAaa"              -->  "aaABbb"


#include <string>
#include <cctype>
#include <iostream>

std::string nextLetter(std::string str) {
  std::string result = "";
  std::cout << str << std::endl;
  
  for (char letter : str) {
    if (letter == 32) { 
      result += " ";
    } else if (isdigit(letter)) {
      result += letter;
    } else if (!isalpha(letter)) {
      result += letter;
    } else if (letter == 90) {
      result += char(65);
    } else if (letter == 122) {
      result += char(97);
    } else {
      int ascii_Val = letter;
      result+=char(ascii_Val + 1);
    }
  }
    
  return result;
}
