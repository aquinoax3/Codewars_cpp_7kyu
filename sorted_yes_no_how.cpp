// Complete the method which accepts an array of integers, and returns one of the following:

// "yes, ascending" - if the numbers in the array are sorted in an ascending order
// "yes, descending" - if the numbers in the array are sorted in a descending order
// "no" - otherwise
// You can assume the array will always be valid, and there will always be one correct answer.

std::string is_sorted_and_how(std::vector<int> array) {
  
  if(array[0] < array[1]) {

    for (int i = 0; i < array.size() - 1; i++) {
      if (array[i] > array[i + 1]) {
        return "no";
      }
    
    }
    
    return "yes, ascending";
  
  }
  
  
  if (array[0] > array[1]) {
    for (int i = 0; i < array.size() - 1; i++) {
      if (array[i] < array[i + 1]){
        return "no";
      }
    }
    
    return "yes, descending";
  }
  
  
}
