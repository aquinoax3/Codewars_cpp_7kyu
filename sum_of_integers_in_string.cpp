// Your task in this kata is to implement a function that calculates the sum of the integers inside a string. For example, in the string "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog", the sum of the integers is 3635.

// Note: only positive integers will be tested.


#include <string>
 
int sumOfIntegers (const std::string& str) {
  int i = 0;
  std::string result = "";
  int sum = 0;
  
  while (i < str.size()) {
    if (isdigit(str[i])) {
      std::cout << str[i] << std::endl;
      result += str[i];
      i++;
    } else {
      sum += stoi(result);
      result = "";
      i++;
    }
  }
  
  sum += stoi(result);
  
  return sum;
}
