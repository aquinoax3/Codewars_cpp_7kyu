// Your goal is to implement the method meanVsMedian which accepts an odd-length array of integers and returns one of the following:

// 'mean' - in case mean value is larger than median value
// 'median' - in case median value is larger than mean value
// 'same' - in case both mean and median share the same value
// Reminder: Median

// Array will always be valid (odd-length >= 3)


std::string meanVsMedian(std::vector<int> numbers) {
  std::sort(numbers.begin(), numbers.end());
  
  int sum = 0;
  double mean = 0;
  int median = numbers[numbers.size() / 2];
 
  for (int num : numbers) {
    sum += num;
  }
  
  mean = sum * 1.0 / numbers.size() * 1.0;
  
  return mean == median ? "same" : mean > median ? "mean" : "median";
}
