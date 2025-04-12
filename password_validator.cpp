// Description
// Your job is to create a simple password validation function, as seen on many websites.

// The rules for a valid password are as follows:

// There needs to be at least 1 uppercase letter.
// There needs to be at least 1 lowercase letter.
// There needs to be at least 1 number.
// The password needs to be at least 8 characters long.
// You are permitted to use any methods to validate the password.

// Examples:
// password("Abcd1234"); ===> true
// password("Abcd123"); ===> false
// password("abcd1234"); ===> false
// password("AbcdefGhijKlmnopQRsTuvwxyZ1234567890"); ===> true
// password("ABCD1234"); ===> false
// password("Ab1!@#$%^&*()-_+={}[]|\:;?/>.<,"); ===> true;
// password("!@#$%^&*()-_+={}[]|\:;?/>.<,"); ===> false;
// Extra info
// You will only be passed strings.
// The string can contain any standard keyboard character.
// Accepted strings can be any length, as long as they are 8 characters or more.





#include <string>
#include <iostream>

using namespace std;

bool password(const std::string &pwd) {
  int upper = 0;
  int lower = 0;
  int num = 0;
  int length = pwd.size();
  
  for (char chars : pwd) {
    if (chars == std::toupper(chars) && isalpha(chars)) {
      upper++;
    } else if (chars == std::tolower(chars) && isalpha(chars)) {
      lower++;
    } else if (isdigit(chars)) {
      num++;
    }
  }
    
    return upper >= 1 && lower >= 1 && num >= 1 && length >= 8;
}
