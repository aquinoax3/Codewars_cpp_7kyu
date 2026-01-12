// Sum and Length
// In this kata you must return a string value, where the first part is the sum of positive numbers and the second part is the number of negative numbers.
// Knowing that the first '0' is negative, the second is positive, the third is negative, and so on...


// For example :
// sumLength(std::vector<int> { -1, 2, 3, 4, 0, 1, 0, -2, 0, -3 });
// return "10 5" (10 = 1 + 2 + 3 + 4 and 5 = 3 + 2 => 3 negatives numbers + second 0 as negative)




#include <vector>
#include <string>

std::string sumLength(std::vector<int> input) {
  int pos = 0; // 2 + 3 + 4
  int neg_count = 0; // 3
  int zero_count = 0; // 3
  
  for (int i = 0; i < input.size(); i++)  {
    
    if (input[i] > 0) {
      std::cout << "POSITIVE: " << input[i] << std::endl;
      pos += input[i];
    } else if (input[i] < 0) {
      neg_count++;
    }
    
    if (input[i] != 0) {
      continue;
    }
    
    if (input[i] == 0) {
      zero_count++;
    }
    if (zero_count % 2 == 1){
      neg_count++;
    }
  }
  
  return std::to_string(pos) + " " + std::to_string(neg_count);
}
