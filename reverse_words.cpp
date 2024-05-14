// Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

// Examples
// "This is an example!" ==> "sihT si na !elpmaxe"
// "double  spaces"      ==> "elbuod  secaps"



#include <sstream>

std::string reverse_words(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    
    while (ss >> word) {
        result += word;
    }
    
    for (auto el : result) {
        std::cout << el << std::endl;
    }
    
}