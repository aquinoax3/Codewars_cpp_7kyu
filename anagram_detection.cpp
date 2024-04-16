// An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

// Note: anagrams are case insensitive

// Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.

// Examples
// "foefet" is an anagram of "toffee"

// "Buckethead" is an anagram of "DeathCubeK"


#include <string>
#include <map>
#include <algorithm>

bool isAnagram(std::string test, std::string original) {
    // Create a map to store letters of original string
        std::map<char, int> hash;

        // transformed orginal and test string to lower case
        std::transform(original.begin(), original.end(), original.begin(), ::tolower);
        std::transform(test.begin(), test.end(), test.begin(), ::tolower);
        
        // iterate through orginal string to add characters as keys 
        for (auto letter : original) {
            // If the iterator returned by find() is equal to hash.end(), it means that letter is NOT FOUND in the map
            if (hash.find(letter) == hash.end()) {
            hash[letter] = 1;
            } else {
            // if it iterates through the hash and finds the char as a key increase its occurance by 1
            hash[letter]++;
            }
        }
        
        // iterate through test string and see if the char is found in the hash
        for(auto letter : test) {
            // if char is in the hash, decrease the occurance by 1
            if(hash[letter]) {
            hash[letter]--;
            } else {
            // If the iterator returned by find() is not equal to hash.end(), it means that letter IS FOUND in the map
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