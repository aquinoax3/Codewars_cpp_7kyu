// Write a function that takes a string and returns an array containing binary numbers equivalent to the ASCII codes of the characters of the string. The binary strings should be eight digits long.

// Example: 'man' should return [ '01101101', '01100001', '01101110' ]



#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> word_to_bin(std::string word) {
  // vector to store binary as a string
  std::vector<std::string> result;
  
  // iterate through each char in string 
  for (char el : word) {
    // get the ascii value of it
    int asciiValue = static_cast<int>(el);
    std::cout << el << " - " << asciiValue << std::endl;
    
    // convert the int into binary
    // convert tghe binary into string 
  }
}
