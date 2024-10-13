// Your task in this kata is to implement a function that calculates the sum of the integers inside a string. For example, in the string "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog", the sum of the integers is 3635.

// Note: only positive integers will be tested.


#include <string>
#include <sstream>

int sumOfIntegers(const std::string& str) {
    int sum = 0;
    std::string numStr = "";

    for (char c : str) {
        if (isdigit(c)) {
            numStr += c;
        } else if (!numStr.empty()) {
            std::stringstream ss(numStr);
            int num;
            ss >> num;
            sum += num;
            numStr = "";
        }
    }

    // Handle the last number if it exists
    if (!numStr.empty()) {
        std::stringstream ss(numStr);
        int num;
        ss >> num;
        sum += num;
    }

    return sum;
}
