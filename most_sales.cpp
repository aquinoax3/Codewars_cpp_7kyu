// You work in the best consumer electronics corporation, and your boss wants to find out which three products generate the most revenue. Given 3 lists of the same length like these:

// products: ["Computer", "Cell Phones", "Vacuum Cleaner"]
// amounts: [3, 24, 8]
// prices: [199, 299, 399]
// Return the three product names with the highest revenues (amount * price), in descending order (highest to lowest revenue).

// Note: if multiple products have the same revenue, order them according to their original positions in the input list.





#include <string>
#include <vector>
#include <algorithm>
#include <utility>

std::vector<std::string> top3(
        const std::vector<std::string>& products,
        const std::vector<int>& amounts,
        const std::vector<int>& prices)
{
  std::vector<std::string> finalPrice;
  std::vector<std::pair<int, std::string>> result;
  int i = 0;
  int j = 0;
  
  while (i < amounts.size() && j < prices.size()) {
    result.push_back({amounts[i] * prices[j], products[i]});
    i++;
    j++;
  }
  

  std::sort(result.begin(), result.end(), std::greater<std::pair<int, std::string>>());  
  
  for (auto num : result) {
    std::cout << num.first << " - " << num.second << std::endl;
  }
  
   for (auto num : finalPrice) {
    std::cout << num << std::endl;
  }
  
  for (int i = 0; i < 3; i++) {
    if (i == 2 && result[i].first == result[i + 1].first) {
      finalPrice.push_back(result[i + 1].second);
    } else{
      finalPrice.push_back(result[i].second);
    }
    
  }
  std:: cout << "new" << std::endl;
  return finalPrice;
}
