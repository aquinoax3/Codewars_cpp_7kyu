// Remove the duplicates from a list of integers, keeping the last ( rightmost ) occurrence of each element.

// Example:
// For input: [3, 4, 4, 3, 6, 3]

// remove the 3 at index 0
// remove the 4 at index 1
// remove the 3 at index 3
// Expected output: [4, 6, 3]

// More examples can be found in the test cases.

// Good luck!



#include <vector>
#include <unordered_set>

std::vector<int> solve(std::vector<int> vec){    
    std::unordered_set<int> noDupes;
    std::vector<int> result;
    
    // Traverse from the end to the start
    for (int i = vec.size() - 1; i >= 0; i--) {
        if (noDupes.find(vec[i]) == noDupes.end()) {
            result.push_back(vec[i]);  // Add element to result if it's not in the set
            noDupes.insert(vec[i]);    // Mark element as seen
        }
    }
    
    // Reverse the result to restore the correct order
    std::reverse(result.begin(), result.end());
    
    return result;
}
