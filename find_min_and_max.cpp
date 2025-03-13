// Implement a function that returns the minimal and the maximal value of a list (in this order).

#include <utility>
#include <vector>

std::pair<long, long> get_min_max(const std::vector<long>& seq) {
  int min = seq[0];
  int max = seq[0];
  
  for (long el : seq) {
    if (el > max) {
      max = el;
    }
    if (el < min) {
      min = el;
    }
  }

    return {min, max};
}
