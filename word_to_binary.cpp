// Write a function that takes a string and returns an array containing binary numbers equivalent to the ASCII codes of the characters of the string. The binary strings should be eight digits long.

// Example: 'man' should return [ '01101101', '01100001', '01101110' ]



#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

// converts int to binary string
std::string binaryToString(int val) {
  if (val == 0) {
    return "0";
  }
  
  std::string binaryStr = "";
  while (val > 0) {
    
    binaryStr += (val % 2 == 0 ? '0' : '1');
    val /= 2;
    
  }
  binaryStr += "0";
  std::reverse(binaryStr.begin(), binaryStr.end());
  return binaryStr;
}


std::vector<std::string> word_to_bin(std::string word) {
  // vector to store binary as a string
  std::vector<std::string> result;
  
  // iterate through each char in string 
  for (char el : word) {
    // get the ascii value of it
    int asciiValue = static_cast<int>(el);
    
    // convert the int into binary
    std::string binToStr = binaryToString(asciiValue);
    
    result.push_back(binToStr);
  }
  
  return result;
}
