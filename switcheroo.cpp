// Given a string made up of letters a, b, and/or c, switch the position of letters a and b (change a to b and vice versa). Leave any incidence of c untouched.

// Example:

// 'acb' --> 'bca'
// 'aabacbaa' --> 'bbabcabb'


#include <string>

std::string switcheroo(const std::string &s) {
    std::string result = "";
    
    for(char letter : s) {
        if(letter == 'a') {
        result += 'b';
        } else if (letter == 'b') {
        result += 'a';
        } else {
        result += letter;
        }
    }

    return result;
}
