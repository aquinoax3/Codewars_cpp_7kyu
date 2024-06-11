// Write a function that takes an array of strings as an argument and returns a sorted array containing the same strings, ordered from shortest to longest.

// For example, if this array were passed as an argument:

// ["Telescopes", "Glasses", "Eyes", "Monocles"]

// Your function would return the following array:

// ["Eyes", "Glasses", "Monocles", "Telescopes"]

// All of the strings in the array passed to your function will be different lengths, so you will not have to decide how to order multiple strings of the same length.




#include <vector>
#include <string>
#include <map>

std::vector<std::string> sortByLength(std::vector<std::string> array){
    std::map<int, std::string> map;
    std::vector<std::string> newArr;
    for (auto word : array) {
        map[word.size()] = word;
    }
    
    for (auto i = map.begin(); i != map.end(); i++) {
        newArr.push_back(i->second);
    }
    
    return newArr;
}