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
        if (i->second > 1) {
        return false;
        }
    }
    
    return true;
}