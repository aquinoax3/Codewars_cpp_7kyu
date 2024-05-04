// Task
// Given an array of integers , Find the maximum product obtained from multiplying 2 adjacent numbers in the array.




#include <vector>
#include <limits>

int adjacentElementsProduct(std::vector<int> inputArray) {
    int max = std::numeric_limits<int>::min(); 
    
    for(int i = 0; i < inputArray.size() - 1; i++) {
        if (inputArray[i] * inputArray[i + 1] > max) {
        max = inputArray[i] * inputArray[i + 1];
        }
    }
        
    return max;
}