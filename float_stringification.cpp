// The function is supposed to convert a floating-point number to a string, but it is not working correctly. Can you figure out why ?

// Converting the string back to a floating-point number should yield the original number (this is called a round-trip).


#include <string>
#include <sstream>
#include <limits>

std::string dtos(double x) {
  std::stringstream ss;
  ss.precision(std::numeric_limits<double>::max_digits10);
  ss << x;
  
  return ss.str();
}
