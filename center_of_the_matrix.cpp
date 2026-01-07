// Create a method that returns the center of a 2-dim array.

// It should return std::nullopt if there is no single center element.

// You can assume all inputs will be rectangular matricies in array form. ex: [[1, 2, 3], [4, 5, 6], [7, 8, 9]]


#include <vector>
#include <optional>
#include <iostream>


using opt_int_t = std::optional<int>;
using matrix_t = std::vector<std::vector<int>>;

opt_int_t center(const matrix_t& mat) {
  if (mat.size() % 2 == 0) {
    return std::nullopt;
  }
  
  return std::nullopt;
}
