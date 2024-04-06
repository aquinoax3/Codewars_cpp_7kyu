// Your task is to remove all duplicate words from a string, leaving only single (first) words entries.

// Example:

// Input:

// 'alpha beta beta gamma gamma gamma delta alpha beta beta gamma gamma gamma delta'

// Output:

// 'alpha beta gamma delta'

#include <string>
#include <sstream>
#include <unordered_map>
#include <iostream>

std::string removeDuplicateWords(const std::string& str) {
    std::unordered_map<std::string, int> hash;
    std::stringstream ss(str);
    std::string word;
    std::string result;
    
    while (ss >> word) {
        if(hash.find(word) != hash.end()) {
        hash[word]++;
        } else {
        hash[word]++;
        }
    }
    
    for(auto i = hash.begin(); i != hash.end(); i++) {
        std::cout << i->first << i->second << std::endl;
        result += i->first + " ";
    }
        
    std::cout << result << std::endl;
}
