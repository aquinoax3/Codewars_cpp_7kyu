// Create a function that accepts an array of names, and returns an array of each name with its first letter capitalized and the remainder in lowercase.

// Examples
// ["jo", "nelson", "jurie"] -->  ["Jo", "Nelson", "Jurie"]
// ["KARLY", "DANIEL", "KELSEY"] --> ["Karly", "Daniel", "Kelsey"]




#include <vector>
#include <string>

std::string lowercase(std::string word) {
  std::string result = "";
  
  for (char ch : word) {
    result += std::tolower(ch);
  }
  
  return result;
}


std::vector<std::string> capMe(const std::vector<std::string>& strings) {
 std::vector<std::string> result;
  
  for (int i = 0; i < strings.size(); i++) {
    if (strings[i].size() == 0) {
      result.push_back("");
      continue;
    }
    
    char firstChar = std::toupper(strings[i][0]);
    std::string correctSpelling = firstChar + lowercase(strings[i].substr(1));
    
    result.push_back(correctSpelling);
  }
   
  return result;
}
