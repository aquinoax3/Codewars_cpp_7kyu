// The following was a question that I received during a technical interview for an entry level software developer position. I thought I'd post it here so that everyone could give it a go:

// You are given an unsorted array containing all the integers from 0 to 100 inclusively. However, one number is missing. Write a function to find and return this number. What are the time and space complexities of your solution?


#include <vector>

int missingNo(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    if (arr[0] != 0) {
        return 0;
    }
    int num = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        num = arr[i];
        if(num + 1 != arr[i + 1]){
        break;
        }
    }
    return num + 1;
}