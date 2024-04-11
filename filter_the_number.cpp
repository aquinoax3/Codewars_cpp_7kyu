// Filter the number
// Oh, no! The number has been mixed up with the text. Your goal is to retrieve the number from the text, can you return the number back to its original state?

// Task
// Your task is to return a number from a string.

// Details
// You will be given a string of numbers and letters mixed up, you have to return all the numbers in that string in the order they occur.


#include <string>

long long filter_string(const std::string &value) {
    std::string result = "";
    long long num;
    
    for(auto letter : value) {
        // isdigit function checks if char is a digit
        if(isdigit(letter)) {
            result += letter;
        }
    }
    
    // std::stoll converts string to long long
    num = std::stoll(result);
    
    return num;
}