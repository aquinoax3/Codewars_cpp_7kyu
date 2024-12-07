// Given a mixed array of number and string representations of integers, add up the non-string integers and subtract the total of the string integers.

// Return as a number.

#include <vector>
#include <variant>
#include <iostream>
#include <typeinfo>

int divCon(const std::vector<std::variant<int, char>>& x) {
  int sumNum = 0;
  int strSum = 0;
  
  for (const auto& num : x) {
        std::visit([&sumNum, &strSum](auto&& value) {
            
          if (isdigit(value)) {
            std::cout << "str - " << value << std::endl;
            int num = value - '0';
            sumNum += num;
          } else {
            std::cout << "int - " << value << std::endl;
            strSum += value;
            std::cout << strSum << std::endl;
          }
        }, num);
    }
  return strSum - sumNum;
}
