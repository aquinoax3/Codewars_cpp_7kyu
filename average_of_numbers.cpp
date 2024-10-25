// #Get the averages of these numbers

// Write a method, that gets an array of integer-numbers and return an array of the averages of each integer-number and his follower, if there is one.

// Example:

// Input:  [ 1, 3, 5, 1, -10]
// Output:  [ 2, 4, 3, -4.5]
// If the array has 0 or 1 values or is null, your method should return an empty array.

// Have fun coding it and please don't forget to vote and rank this kata! :-)


std::vector<double> averages(std::vector<int> numbers) {
  std::vector<double> result;
  if (numbers.size() < 2) return result;
  
  for (int i = 0; i < numbers.size() - 1; i++) {
    double ans = (numbers[i] * 1.0 + numbers[i + 1] * 1.0) / 2 ;
    result.push_back(ans);
  }

    return result;
}
