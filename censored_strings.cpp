// My PC got infected by a strange virus. It only infects my text files and replaces random letters by *, li*e th*s (like this).

// Fortunately, I discovered that the virus hides my censored letters inside root directory.

// It will be very tedious to recover all these files manually, so your goal is to implement uncensor function that does the hard work automatically.

// Examples
// uncensor("*h*s *s v*ry *tr*ng*", "Tiiesae") ➜ "This is very strange"

// uncensor("A**Z*N*", "MAIG") ➜ "AMAZING"

// uncensor("xyz", "") ➜ "xyz"


#include <string>

std::string uncensor(const std::string& infected, const std::string& discovered) {
    int j = 0;
    std::string result = "";
    
    for (auto el : infected) {
        if (el == '*') {
            result += discovered[j];
            j++;
        } else {
            result += el;
        }
    }
    
    return result;
}
