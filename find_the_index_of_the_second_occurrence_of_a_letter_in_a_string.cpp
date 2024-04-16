// In this kata, you need to write a function that takes a string and a letter as input and then returns the index of the second occurrence of that letter in the string. If there is no such letter in the string, then the function should return -1. If the letter occurs only once in the string, then -1 should also be returned.

// Examples:

// secondSymbol('Hello world!!!','l') --> 3
// secondSymbol('Hello world!!!', 'A') --> -1
// Good luck ;) And don't forget to rate this Kata if you liked it.

#include <string>

int secondSymbol(const std::string& str, char symbol) {
    // initialize with -1, to indicate no occurance
    int firstIdx = -1;
    
    for (unsigned i = 0; i < str.size(); i++) {
        // check if element equals symbol
        if (str[i] == symbol) {
            // if firstIdx equals -1, then we haven't seen that element, meaning we can initialize that index of that element to firstIdx
            if (firstIdx == -1) {
                firstIdx = i;
            } else {
                // else we found the index with the symbol that occurs after the first one
                return i;
            }
        }
    }
    
    return -1;
}