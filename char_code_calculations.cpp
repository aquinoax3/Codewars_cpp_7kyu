// Given a string, turn each character into its ASCII character code and join them together to create a number - let's call this number total1:

// 'ABC' --> 'A' = 65, 'B' = 66, 'C' = 67 --> 656667
// Then replace any incidence of the number 7 with the number 1, and call this number 'total2':

// total1 = 656667
//               ^
// total2 = 656661
//               ^
// Then return the difference between the sum of the digits in total1 and total2:

//   (6 + 5 + 6 + 6 + 6 + 7)
// - (6 + 5 + 6 + 6 + 6 + 1)
// -------------------------
//                        6


#include <string>
#include <iostream>


int calc(const std::string& x) {
  
  std::string ascii_join = "";
  for (char el : x) {
    ascii_join += std::to_string(int(el));
  }
  
  int num1 = 0; 
  for (char el : ascii_join) {
    num1 += el - '0';
  }
  
  std::string ascii_join2 = "";
  for (char el : ascii_join) {
    if (el == '7') {
       ascii_join2 += '1';
    } else {
      ascii_join2 += el;
    }
  }
  
  int num2 = 0;
  for (char el : ascii_join2) {
    num2 += el - '0';
  }
  

  return num1 - num2;
}
