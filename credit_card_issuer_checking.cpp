// Given a credit card number we can determine who the issuer/vendor is with a few basic knowns.

// Complete the function getIssuer() that will use the values shown below to determine the card issuer for a given card number. If the number cannot be matched then the function should return the string Unknown.

// | Card Type  | Begins With          | Number Length |
// |------------|----------------------|---------------|
// | AMEX       | 34 or 37             | 15            |
// | Discover   | 6011                 | 16            |
// | Mastercard | 51, 52, 53, 54 or 55 | 16            |
// | VISA       | 4                    | 13 or 16      |
// NASM and C/C++ note: The return value is not freed.

// Examples
// getIssuer(4111111111111111) == "VISA"
// getIssuer(4111111111111) == "VISA"
// getIssuer(4012888888881881) == "VISA"
// getIssuer(378282246310005) == "AMEX"
// getIssuer(6011111111111117) == "Discover"
// getIssuer(5105105105105100) == "Mastercard"
// getIssuer(5105105105105106) == "Mastercard"
// getIssuer(9111111111111111) == "Unknown"


std::string getIssuer(const std::string &number) {
    // Code your solution her
  
    if (number.size() == 13 || number.size() == 16) {
      if (number[0] == '4') return "VISA";
    }
  
    if (number.size() == 15) {
      std::string shortStr = number.substr(0,2);
      if (shortStr == "34" || shortStr == "37") return "AMEX";
    }
  
    if (number.size() == 16) {
      std::string shortStr = number.substr(0,4);
      if (shortStr == "6011") return "Discover";
    }
  
    if (number.size() == 16) {
      std::string shortStr = number.substr(0,2);
      int numShort = std::stoi(shortStr);
      if (numShort >= 51 && numShort <= 55 ) return "Mastercard";
    }
  
  
    return "Unknown";
}
