// Write a function that will randomly upper and lower characters in a string - randomCase() (random_case() for Python).

// A few examples:

// randomCase("Lorem ipsum dolor sit amet, consectetur adipiscing elit") == "lOReM ipSum DOloR SiT AmeT, cOnsEcTEtuR aDiPiSciNG eLIt"

// randomCase("Donec eleifend cursus lobortis") == "DONeC ElEifEnD CuRsuS LoBoRTIs"
// Notes:

// This function will work within the basic ASCII character set to make this kata easier - so no need to make the function multibyte safe.

// The letters MUST be selected randomly - filters are set to make sure there is no cheating!



#include <string>
#include <iostream>
#include <cctype>

std::string randomCase(std::string& x) {
#include <string>
#include <iostream>
#include <cctype>

std::string randomCase(std::string& x) {

  for (int i = 0; i < x.size(); i++) {
    if (x[i] == ' ') {
      continue;
    }
    
    int randomNum = rand() % 2;
    
    if (randomNum % 2 == 0) {      
      x[i] = std::toupper(x[i]);
    } else {
      x[i] = std::tolower(x[i]);      
    }
  }
  
  return x;
}
