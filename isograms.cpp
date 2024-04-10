// An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

// Example: (Input --> Output)

// "Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

// isIsogram "Dermatoglyphics" = true
// isIsogram "moose" = false
// isIsogram "aba" = false




#include <map>
#include <string>
#include <algorithm>

bool is_isogram(std::string str) {
    std::map<char, int> hash;
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    for(auto chr : str) {
        if (hash.find(chr) == hash.end()) {
        hash[chr] = 1;
        } else {
        hash[chr]++;
        }
    }
    
    for(auto i = hash.begin(); i != hash.end(); i++){
        std::cout << i->first << std::endl;
    }
}