// Write a program to determine if a string contains only unique characters. Return true if it does and false otherwise.

// The string may contain any of the 128 ASCII characters. Characters are case-sensitive, e.g. 'a' and 'A' are considered different characters.



#include <unordered_map>
#include <algorithm>
#include <string>

bool hasUniqueChars(std::string s) {
    std::unordered_map<char, int> hash;
        
    for(char letter : s) {
        // if letter is FOUND in the hash map, then it would RETURN an iterator pointing to the key value pair
        // if the letter is NOT FOUND then hash.find() would returns an iterator equal to "hash.end()"
        // The if condition essentially checks whether the character letter already exists as a key in the hash map. If it does, the condition is true; otherwise, it's false.

        // If hash.find(letter) == hash.end() in your code, it means the character letter ** IS NOT ** currently present as a key in the hash unordered map.
        // If hash.find(letter) != hash.end() in your code, it means the character letter ** IS**  currently present as a key in the hash unordered map.
        
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
