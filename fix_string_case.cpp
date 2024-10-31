// In this Kata, you will be given a string that may have mixed uppercase and lowercase letters and your task is to convert that string to either lowercase only or uppercase only based on:

// make as few changes as possible.
// if the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.
// For example:

// solve("coDe") = "code". Lowercase characters > uppercase. Change only the "D" to lowercase.
// solve("CODe") = "CODE". Uppercase characters > lowecase. Change only the "e" to uppercase.
// solve("coDE") = "code". Upper == lowercase. Change all to lowercase.


#include <string>
#include <algorithm>

std::string solve(const std::string& str){
  if (str == "") return "";
  std::string newStr = str;
  
  int upCount = 0;
  int downCount = 0;
  
  for (char el : newStr) {
    if (std::toupper(el) == el) {
      upCount++;
    } else {
      downCount++;
    }
  }
   
  if (upCount == downCount) {
    std::transform(newStr.begin(), newStr.end(), newStr.begin(), ::tolower);
    return newStr;
  } else if (upCount > downCount) {
     std::transform(newStr.begin(), newStr.end(), newStr.begin(), ::toupper);
    return newStr;
  } else {
    std::transform(newStr.begin(), newStr.end(), newStr.begin(), ::tolower);
    return newStr;
  }

}
