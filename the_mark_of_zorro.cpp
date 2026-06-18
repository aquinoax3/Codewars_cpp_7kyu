// The Mark of Zorro

// In this kata, you will need to develop an algorithm that returns all items from a matrix, just like when Zorro prints his "Z" mark. In this case, the function must be a template (for c++), which works regardless of the type of data contained in the array. All matrices will be square, and the empty ones should return an empty array. The output should use the same container type as either of the input types (std::vector for c++).

// Example 1

// std::vector<std::vector<char>> matrix {

// {'a', 'b', 'c', 'e'},

// {'f', 'g', 'h', 'i'},

// {'j', 'k', 'l', 'm'},

// {'n', 'o', 'p', 'q'}

// }; 
// Should return {'a', 'b', 'c', 'e', 'h', 'k', 'n', 'o', 'p', 'q'}.

// Example 2

// std::vector<std::vector<float>> matrix {

// {1.5, 17.7, 9.345},

// {0.1, 91.0, 14.81},

// {9.9, -1.7, -9.13}

// }; 
// Should return {1.5, 17.7, 9.345, 91.0, 9.9, -1.7, -9.13}.

// Example 3

// std::vector<std::vector<std::string>> matrix {}; 
// Should return {}.



#include <vector> 

template <typename T> std::vector<T> zorro(const std::vector<std::vector<T>> matrix) {
  std::vector<T> result;
  
  for (int row = 0; row < matrix.size(); row++) {
    for (int col = 0; col < matrix[0].size(); col++) {
      if (row == 0 || row == matrix.size() - 1) {
        result.push_back(matrix[row][col]);
      }
    }
  }
  
  
  return result;
}
