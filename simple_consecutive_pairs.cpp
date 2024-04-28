// pairs([1,2,5,8,-4,-3,7,6,5]) = 3
// The pairs are selected as follows [(1,2),(5,8),(-4,-3),(7,6),5]
// --the first pair is (1,2) and the numbers in the pair are consecutive; Count = 1
// --the second pair is (5,8) and are not consecutive
// --the third pair is (-4,-3), consecutive. Count = 2
// --the fourth pair is (7,6), also consecutive. Count = 3.

#include <vector>

int pairs(std::vector<int> arr) {
    int total = 0;

    for (int i = 0; i < arr.size() - 1; i += 2) {
        if (arr[i] + 1 == arr[i + 1] || arr[i] - 1 == arr[i + 1]) {
            total++;
        }
    }

    return total;
}