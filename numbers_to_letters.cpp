// Given an array of numbers (in string format), you must return a string. The numbers correspond to the letters of the alphabet in reverse order: a=26, z=1 etc. You should also account for '!', '?' and ' ' that are represented by '27', '28' and '29' respectively.

// All inputs will be valid.


#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
    std::vector<char> letters = { 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p',
                                    'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd',
                                    'c', 'b', 'a', '!', '?', ' '};
    std::string result = "";

    for (int i = 0; i < arr.size(); i++) {
        std::string el = arr[i]; //24
        int answer = std::stoi(el);
    result += letters[answer - 1];
    }
    
    return result;
}