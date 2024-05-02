// Given a number, write a function to output its reverse digits. (e.g. given 123 the answer is 321)

// Numbers should preserve their sign; i.e. a negative number should still be negative when reversed.

// Examples
//  123 ->  321
// -456 -> -654
// 1000 ->    1



#include <string>

long long reverseNumber(long long n) {
    std::string numStr = std::to_string(n);
    std::string result = "";
    
    for (int i = numStr.size() - 1; i >= 0; i--) {
        result += numStr[i];
    }
    
    int answer = stoi(result);
    
    return n < 0 ? answer * -1 : answer;
}