// This time no story, no theory. The examples below show you how to write function accum:

// Examples:
// accum("abcd") -> "A-Bb-Ccc-Dddd"
// accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
// accum("cwAt") -> "C-Ww-Aaa-Tttt"
// The parameter of accum is a string which includes only letters from a..z and A..Z.


class Accumul {
public:
    static std::string accum(const std::string &s) {
      std::string result = "";
      
      for (int i = 0; i < s.size(); i++) {
        result += std::toupper(s[i]);
        
        for (int j = 0; j < i; j++) {
          result += std::tolower(s[i]);
        }
        result += "-";
      }
      result.pop_back();
      return result;
    }
};
