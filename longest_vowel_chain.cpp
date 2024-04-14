// #include <string>
// The vowel substrings in the word codewarriors are o,e,a,io. The longest of these has a length of 2. Given a lowercase string that has alphabetic characters only (both vowels and consonants) and no spaces, return the length of the longest vowel substring. Vowels are any of aeiou.

// Good luck!

#include <string>


int solve(std::string s){
    int max = 0;
    int currentLength = 0;
    
    for (unsigned i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u') {
        currentLength++;
        } else {
        
        if (currentLength > max) {
            max = currentLength;
        }
        
        currentLength = 0;
        }
        
    }
    
    if (currentLength > max) {
        max = currentLength;
    }
    
    return max;
}