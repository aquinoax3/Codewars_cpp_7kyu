// DESCRIPTION:
// In this Kata, we are going to reverse a string while maintaining the spaces (if any) in their original place.

// For example:

// solve("our code") = "edo cruo"
// -- Normal reversal without spaces is "edocruo". 
// -- However, there is a space at index 3, so the string becomes "edo cruo"

// solve("your code rocks") = "skco redo cruoy". 
// solve("codewars") = "srawedoc"

#include <string>
#include <iostream>

std::string solve(std::string s){
    
    // variable to store reversed string
    std::string result = "";
    
    
    for (int i = s.size() - 1; i >= 0; i--) {
        // get the size of the result through each iterattion, this allows you to iterate through the original string 
        int resultLen = result.size();
        
        // if the original string as a ' ', you add a ' ' to the result
        if (s[resultLen] == ' ') {
            result += ' ';
        }
        // while iterating through the string backwards, if it doesn't equal to a space, add the letter to result 
        if (s[i] != ' ') {
            result += s[i];
        }
    }
    
    return result;
}


