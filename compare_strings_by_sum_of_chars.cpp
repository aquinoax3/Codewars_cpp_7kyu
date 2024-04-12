// Compare two strings by comparing the sum of their values (ASCII character code).

// For comparing treat all letters as UpperCase
// null/NULL/Nil/None should be treated as empty strings
// If the string contains other characters than letters, treat the whole string as it would be empty
// Your method should return true, if the strings are equal and false if they are not equal.

// Examples:
// "AD", "BC"  -> equal
// "AD", "DD"  -> not equal
// "gf", "FG"  -> equal
// "zz1", ""   -> equal (both are considered empty)
// "ZzZz", "ffPFF" -> equal
// "kl", "lz"  -> not equal
// null, ""    -> equal

#include <string>

bool compare(std::string s1, std::string s2) {
    int total1 = 0;
    int total2 = 0;
    
    for(auto letter : s1) {
        total1 += int(letter); 
    }
    
    for(auto letter : s2) {
        total2 += int(letter);
    }
    
    return total1 == total2 ? true : false;
}