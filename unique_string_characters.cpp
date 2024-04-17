// In this Kata, you will be given two strings a and b and your task will be to return the characters that are not common in the two strings.

// For example:

// solve("xyab","xzca") = "ybzc" 
// --The first string has 'yb' which is not in the second string. 
// --The second string has 'zc' which is not in the first string. 
// Notice also that you return the characters from the first string concatenated with those from the second string.

// More examples in the tests cases.

// Good luck!


#include <string>

std::string solve(std::string a, std::string b) {
    //create variable to store char that aren't in each of the strings
    std::string result;
    
    // iterate through first string and check if char from first is in second string 
    for (auto letter : a) {

        // if b.find() == std::string::npos that meaans the char is not in the string
        if (b.find(letter) == std::string::npos) {
        
        result += letter;
        }
    }
    //repeat the same stepl for the second string
    for (auto letter : b) {

        // if a.find() == std::string::npos that means the char is not in the string
        if (a.find(letter) == std::string::npos) {
        
        result += letter;
        }
    }
    // return result 
    
    return result;
}