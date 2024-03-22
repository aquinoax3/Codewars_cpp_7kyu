// Task:
// Given a list of integers, determine whether the sum of its elements is odd or even.

// Give your answer as a string matching "odd" or "even".

// If the input array is empty consider it as: [0] (array with a zero).

// Examples:
// Input: [0]
// Output: "even"

// Input: [0, 1, 4]
// Output: "odd"

// Input: [0, -1, -5]
// Output: "even"
// Have fun!



#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
    int result = 0;
    
    for(int num : arr) {
        result += num;
    }
    
    return result % 2 == 0 ? "even" : "odd";
}