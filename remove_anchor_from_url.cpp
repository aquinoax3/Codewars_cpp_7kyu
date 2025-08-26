// Complete the function/method so that it returns the url with anything after the anchor (#) removed.

// Examples
// "www.codewars.com#about" --> "www.codewars.com"
// "www.codewars.com?page=1" -->"www.codewars.com?page=1"

#include <string>

std::string replaceAll(std::string str) {
  std::string result = "";
  int i = 0;
  int j = str.size() - 1;
  
  std::cout << str.size() << " - " << j << std::endl;
  
  while (j >= 0) {
    if (str[j] == '#') {
      result = str.substr(i, j);
      break;
    }
    j--;
  }
  
  return result == "" ? str : result;  
}

