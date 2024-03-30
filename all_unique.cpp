// Write a program to determine if a string contains only unique characters. Return true if it does and false otherwise.

// The string may contain any of the 128 ASCII characters. Characters are case-sensitive, e.g. 'a' and 'A' are considered different characters.



#include <unordered_map>
#include <algorithm>
#include <string>

bool hasUniqueChars(std::string s) {
    std::unordered_map<char, int> hash;
        
    for(char letter : s) {
        if(hash.find(letter) != hash.end()){
        hash[letter]++;
        } else{
        hash[letter]++;
        }
    }
    
    for(auto i = hash.begin(); i != hash.end(); i++){
        if(i->second > 1) {
        return false;
        }
    }
    return true;
}