// Simple, given a string of words, return the length of the shortest word(s).

// String will never be empty and you do not need to account for different data types.

#include <string>
#include <unordered_map>
#include <sstream>
#include <iostream>

int find_short(std::string str) {
    std::unordered_map<std::string, int> hash;
    std::stringstream ss(str);
    std::string word;
    
    while(ss >> word) {
        hash[word] = word.size();
    }
    
    for(auto i = hash.begin(); i != hash.end(); i++) {
        std::cout << i->first << i->second << std::endl;
    }
    
    return 0;
}