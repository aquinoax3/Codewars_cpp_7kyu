// Complete the function that takes a sequence of numbers as single parameter. Your function must return the sum of the even values of this sequence.

// Only numbers without decimals like 4 or 4.0 can be even.

// The input is a sequence of numbers: integers and/or floats.

// Examples
// [4, 3, 1, 2, 5, 10, 6, 7, 9, 8]  -->  30   # because 4 + 2 + 10 + 6 + 8 = 30
// []                               -->  0

#include <vector>

int sum_even_numbers(const std::vector<double> &seq) {
  int sum = 0;
  
  for (auto num : seq) {
    int whole_num = num;
    double dub_num = whole_num - num;
    if(whole_num % 2 == 0 && dub_num == 0) {
        sum += num;
    }
  }

  return sum;
}
