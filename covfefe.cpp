// Covfefe
// Your are given a string. You must replace any occurence of the sequence coverage by covfefe, however, if you don't find the word coverage in the string, you must add covfefe at the end of the string with a leading space.

// For the languages where the string is mutable (such as ruby), don't modify the given string, otherwise this will break the test cases.

#include <string>
#include <sstream>

std::string covfefe(std::string s){
  std::stringstream ss(s);
  std::string word;
  std::string result = "";
  
  while (ss >> word) {
    if(word == "coverage") {
      result += "covfefe";
    }
    
    if(word != "coverage") {
      result += word + " " + "covfefe";
    }
  }
   
  return result; 
}
