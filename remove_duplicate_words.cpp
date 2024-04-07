// Your task is to remove all duplicate words from a string, leaving only single (first) words entries.

// Example:

// Input:

// 'alpha beta beta gamma gamma gamma delta alpha beta beta gamma gamma gamma delta'

// Output:

// 'alpha beta gamma delta'

#include <string>
#include <sstream>
#include <unordered_map>


std::string removeDuplicateWords(const std::string& str) {
    std::unordered_map<std::string, int> hash;
    std::stringstream ss(str);
    std::string word;
    std::string result;

    if(str.empty()) {
        return "";
    }
    
    while (ss >> word) {
        if(hash.find(word) == hash.end()) {
        hash[word]++;
        result += word + " ";
        } 
    }

    
    result.pop_back();
    return result;
}

