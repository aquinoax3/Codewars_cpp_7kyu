// In this Kata, you will be given a string that has lowercase letters and numbers. Your task is to compare the number groupings and return the largest number. Numbers will not have leading zeros.

// For example, solve("gh12cdy695m1") = 695, because this is the largest of all number groupings.

// Good luck!


#include <string>
#include <iostream>

int solve(std::string s) {

    int max = 0;
    std::string strInt = "";

    for (unsigned i = 0; i <= s.size(); i++) {

        if (isdigit(s[i])) {
        strInt += s[i];
        } else {
        if (!strInt.empty()) {
            
            int num = stoi(strInt);
            
            if (num > max) {
            max = num;
            }
            
            strInt = "";
        }
        }
    }
    return max;
}

