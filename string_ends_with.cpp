// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

// Examples:

// solution('abc', 'bc') // returns true
// solution('abc', 'd') // returns false



#include <string>
#include <iostream>


bool solution(std::string const &str, std::string const &ending) {
    std::string result = str.substr(str.size() - ending.size(), ending.size());
    
    std::cout << "og: " << str << std::endl;
    std::cout << result << std::endl;
    std::cout << "end: " << ending << std::endl;
    
    return result == ending;
}