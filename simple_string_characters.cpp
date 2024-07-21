// In this Kata, you will be given a string and your task will be to return a list of ints detailing the count of uppercase letters, lowercase, numbers and special characters, as follows.

// Solve("*'&ABCDabcde12345") = [4,5,5,3]. 
// --the order is: uppercase letters, lowercase, numbers and special characters.
// More examples in the test cases.

// Good luck!

#include <vector>
#include <string>

std::vector<int> solve(std::string s){
    int up = 0;
    int low = 0;
    int num = 0;
    int spec = 0;
    
    for (auto letter : s) {
        if (isdigit(letter)){
        num++;
        }
        if (isalpha(letter)) {
        char curr = std::toupper(letter);
            if (curr == letter) {
            up++;
            } else {
            low++;
            }
        }
        if(!isalpha(letter) && !isdigit(letter)) {
        spec++;
        }
    }
    
    std::vector<int> result = {up, low, num, spec};
    
    return result;
}