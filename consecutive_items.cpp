// You are given a list of unique integers arr, and two integers a and b. Your task is to find out whether or not a and b appear consecutively in arr, and return a boolean value (True if a and b are consecutive, False otherwise).

// It is guaranteed that a and b are both present in arr.

#include <vector>


bool consecutive(std::vector<int>arr, int a,int b){
    for(unsigned i = 0; i < arr.size(); i++) {
    if (arr[i] + arr[i + 1] == a + b){
        return true;
    }
    }
    return false;
}