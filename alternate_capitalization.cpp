// Given a string, capitalize the letters that occupy even indexes and odd indexes separately, and return as shown below. Index 0 will be considered even.

// For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.

// The input will be a lowercase string with no spaces.

// Good luck!

// If you like this Kata, please try:

// Indexed capitalization

// Even-odd disparity


#include <string>
#include <utility>
#include <cctype>
#include <iostream>

std::pair<std::string, std::string> capitalize(const std::string &s) {
    std::pair<std::string, std::string> result;
    std::string alt_str1 = "";
    std::string alt_str2 = "";


    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0) {
            char ch = toupper(s[i]);
            alt_str1 += ch;
        } else {
            alt_str1 += s[i];
        }
    }
    
    for(int i = 0; i < s.size(); i++){
        if(i % 2 != 0) {
            char ch = toupper(s[i]);
            alt_str2 += ch;
        } else {
            alt_str2 += s[i];
        }
    }
    
    result.first = alt_str1;
    result.second = alt_str2;
    
    return result;
}

int main() {
    std::string test = "abcdef";
    std::pair<std::string, std::string> ans = capitalize(test);

    std::cout << ans.first << std::endl;
    std::cout << ans.second << std::endl;


    return 0;
}