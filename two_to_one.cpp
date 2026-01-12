// Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string (alphabetical ascending), the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

// Examples:
// a = "xyaabbbccccdefww"
// b = "xxxxyyyyabklmopq"
// longest(a, b) -> "abcdefklmopqwxy"

// a = "abcdefghijklmnopqrstuvwxyz"
// longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"


#include <unordered_set>
#include <string>
#include <algorithm>

class TwoToOne {
public:
    static std::string longest(const std::string &s1, const std::string &s2) {
      std::string fullStr = s1 + s2;
      std::unordered_set<char> noDupes(fullStr.begin(), fullStr.end());
  
      std::string result = "";
      for (char ch : noDupes) {
        result += ch;
      }
      
      std::sort(result.begin(), result.end());
      
      return result;
    }
    
    
};
