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
#include <iostream>

std::string nextLetter(std::string str) {
  std::string result = "";
  
  for (char letter : str) {
    if (letter == 32) { 
      result += " ";
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
