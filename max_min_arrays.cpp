// In this Kata, you will be given an array of unique elements, and your task is to rearrange the values so that the first max value is followed by the first minimum, followed by second max value then second min value, etc.

// For example:

// solve([15,11,10,7,12]) = [15,7,12,10,11]
// The first max is 15 and the first min is 7. The second max is 12 and the second min is 10 and so on.

// More examples in the test cases.

// Good luck!
#include <vector>
#include <iostream>

std::vector<int> solve(std::vector<int> v)
{
    std::vector<int> result;
    std::sort(v.begin(), v.end());

    int i = 0;
    int j = v.size() - 1;

    while (i <= j)
    {
        if (i == j)
        {
            result.push_back(v[j]);
        }
        else
        {
            result.push_back(v[j]);
            result.push_back(v[i]);
        }

        i++;
        j--;
    }

    return result;
}

