// Introduction
// There is a war and nobody knows - the alphabet war!
// There are two groups of hostile letters. The tension between left side letters and right side letters was too high and the war began.

// Task
// Write a function that accepts fight string consists of only small letters and return who wins the fight. When the left side wins return Left side wins!, when the right side wins return Right side wins!, in other case return Let's fight again!.

// The left side letters and their power:

//  w - 4
//  p - 3
//  b - 2
//  s - 1
// The right side letters and their power:

//  m - 4
//  q - 3
//  d - 2
//  z - 1
// The other letters don't have power and are only victims.

// Example
// AlphabetWar("z");        //=> Right side wins!
// AlphabetWar("zdqmwpbs"); //=> Let's fight again!
// AlphabetWar("zzzzs");    //=> Right side wins!
// AlphabetWar("wwwwwwz");  //=> Left side wins!
#include <iostream>
#include <string>

std::string alphabetWar(std::string fight) {
    // string type variable to store left/right side letters with index as score
    std::string leftSide = " sbpw";
    std::string rightSide = " zdqm";
    // int type variable to keep track of left/right score
    int leftScore = 0;
    int rightScore = 0;
    
    // iterate through fight string checking if it equals any of the letters in left/right
    for (auto letter : fight) {
        // if so add appropriate points to score variable
        if (letter == 's' || letter == 'b' || letter == 'p' || letter == 'w') {
            int result = leftSide.find(letter);
            leftScore += result;
        }

        if (letter == 'm' || letter == 'q' || letter == 'd' || letter == 'z') {
            int result = rightSide.find(letter);
            rightScore += result;
        }
    }

    // compare scores of left and right and return winner

    return leftScore == rightScore ? "Let's fight again!" : 
                        leftScore > rightScore ? "Left side wins!" : "Right side wins!";
}


int main() {
    std::string test1 = "zdqmwpbs";
    std::string test2 = "zzzzs";
    std::string test3 = "wwwwww";
    std::string result = alphabetWar(test1);
    std::string result2 = alphabetWar(test2);
    std::string result3 = alphabetWar(test3);


    std::cout << result << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
}
