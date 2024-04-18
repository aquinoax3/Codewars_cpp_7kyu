// In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

// Examples
// highAndLow("1 2 3 4 5");  // return "5 1"
// highAndLow("1 2 -3 4 5"); // return "5 -3"
// highAndLow("1 9 3 4 -5"); // return "9 -5"
// Notes
// All numbers are valid Int32, no need to validate them.
// There will always be at least one number in the input string.
// Output string must be two numbers separated by a single space, and highest number is first.



#include <string>
#include <vector>
#include <sstream>

std::string highAndLow(const std::string& numbers) {
    std::stringstream ss(numbers);
    int num;
    std::vector<int> newArr;

    // Parse numbers from the input string
    while (ss >> num) {
        newArr.push_back(num);
    }

    // Find min and max
    int min = newArr[0];
    int max = newArr[0];
    for (int i = 1; i < newArr.size(); ++i) {
        if (newArr[i] > max) {
            max = newArr[i];
        }
        if (newArr[i] < min) {
            min = newArr[i];
        }
    }

    return std::to_string(max) + " " + std::to_string(min);
}