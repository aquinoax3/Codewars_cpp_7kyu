// Write a function that takes a positive integer n, sums all the cubed values from 1 to n (inclusive), and returns that sum.

// Assume that the input n will always be a positive integer.

// Examples: (Input --> output)

// 2 --> 9 (sum of the cubes of 1 and 2 is 1 + 8)
// 3 --> 36 (sum of the cubes of 1, 2, and 3 is 1 + 8 + 27)


#include <math.h>

unsigned int sum_cubes(unsigned int n) {
  unsigned int sum = 0;
  
  for (unsigned int i = 0; i <= n; i++) {
    sum += pow(i,3);
  }
  
  return sum;
}
