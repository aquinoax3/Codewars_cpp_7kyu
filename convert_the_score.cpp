// You are working at a lower league football stadium and you've been tasked with automating the scoreboard.

// The referee will shout out the score, you have already set up the voice recognition module which turns the ref's voice into a string, but the spoken score needs to be converted into a pair for the scoreboard!

// e.g. "The score is four nil" should return [4,0]

// Either teams score has a range of 0-9, and the ref won't say the same string every time e.g.

// "new score: two three"
  
// "two two"
  
// "Arsenal just conceded another goal, two nil"
// Note:

// Please return a std::vector<int>
// Please rate and enjoy!

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

std::vector<int> scoreboard(const std::string &s) {
  std::unordered_map<std::string, int> score = {
    {"nil", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9},
  };
  
  std::vector<int> res;
  std::stringstream ss(s);
  std::string word;
  
  while (ss >> word) {
    std::cout << word << std::endl;
    if (score.find(word) != score.end()) {
      res.push_back(score[word]);
    }
  }
  
  return res;
}
