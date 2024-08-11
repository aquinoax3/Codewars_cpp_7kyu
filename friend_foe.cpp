// Make a program that filters a list of strings and returns a list with only your friends name in it.

// If a name has exactly 4 letters in it, you can be sure that it has to be a friend of yours! Otherwise, you can be sure he's not...

// Input = ["Ryan", "Kieran", "Jason", "Yous"]
// Output = ["Ryan", "Yous"]

// Input = ["Peter", "Stephen", "Joe"]
// Output = []
// Input strings will only contain letters. Note: keep the original order of the names in the output.


#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
        std::vector<std::string> result;

        for (auto word : input) {
        if (word.size() == 4) {
        result.push_back(word);
        }
        }

        if (result.size() == 0) {
        result.push_back("");
        }

        return result;
}