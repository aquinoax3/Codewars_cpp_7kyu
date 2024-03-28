// Return the number (count) of vowels in the given string.

// We will consider a, e, i, o, u as vowels for this Kata (but not y).

// The input string will only consist of lower case letters and/or spaces.

#include <string>

using namespace std;

int getCount(const string& inputStr){
    int num_vowels = 0;
    for (char letter : inputStr) {
        if( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        num_vowels++;
        }
    }
    return num_vowels;
}