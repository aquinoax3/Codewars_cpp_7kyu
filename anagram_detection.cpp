// An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

// Note: anagrams are case insensitive

// Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.

// Examples
// "foefet" is an anagram of "toffee"

// "Buckethead" is an anagram of "DeathCubeK"


#include <string>
#include <map>
#include <algorithm>

bool isAnagram(std::string test, std::string original){
    std::map<char, int> hash;
    std::transform(original.begin(), original.end(), original.begin(), ::tolower);
    std::transform(test.begin(), test.end(), test.begin(), ::tolower);
    
    for (auto letter : original) {
        if (hash.find(letter) == hash.end()) {
        hash[letter] = 1;
        } else {
        hash[letter]++;
        }
    }

    for(auto letter : test) {
        if(hash[letter]) {
        hash[letter]--;
        } else {
        if(hash.find(letter) != hash.end()) return false;
        }
    }
    
    for(auto i = hash.begin(); i != hash.end(); i++) {
        if (i->second > 0) {
        return false;
        }
    }
    
    return true;
    }