// Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

// For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)

// Example #2: An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)

// Note: The function accepts an integer and returns an integer.

// Happy Coding!



#include <string>

int square_digits(int num) {
  std::string numStr = std::to_string(num);
  std::string result;

  for (auto digit : numStr) {
    int square = (digit - '0') * (digit - '0'); // Convert char to int
    result += std::to_string(square); 
  }

  return std::stoi(result);
}
