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
  
  int upCount = 0;
  int downCount = 0;
  
  for (char el : str) {
    if (std::toupper(el) == el) {
      upCount++;
    } else {
      downCount++;
    }
  }
  
  std::cout << upCount << std::endl;
  std::cout << downCount << std::endl;
  
  return upCount > downCount ? std::transform(str.begin(), str.end(), st::string.begin(), std::toupper) :
  std::transform(str.begin(), str.end(), st::string.begin(), std::tolower)


}
