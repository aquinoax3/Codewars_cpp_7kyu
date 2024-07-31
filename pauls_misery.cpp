// Paul is an excellent coder and sits high on the CW leaderboard. He solves kata like a banshee but would also like to lead a normal life, with other activities. But he just can't stop solving all the kata!!

// Given an array (x) you need to calculate the Paul Misery Score. The values are worth the following points:

// kata = 5
// Petes kata = 10
// life = 0
// eating = 1
// The Misery Score is the total points gained from the array. Once you have the total, return as follows:

// < 40 = 'Super happy!'
// < 70 >= 40 = 'Happy!'
// < 100 >= 70 = 'Sad!'
// > 100 = 'Miserable!'

#include <string>
#include <vector>

std::string paul(const std::vector<std::string>& x) {
    int sum = 0;

    for (std::string word : x) {
        if( word == "kata"){
        sum += 5;
        } else if( word == "Petes kata") {
        sum += 10;
        } else if (word == "eating") {
        sum += 1;
        } else {
        sum += 0;
        }
    }
    
    return sum >= 100 ? "Miserable!" : sum < 100 && sum >= 70 ? "Sad!" : sum < 70 && sum >= 40 ? "Happy!" : "Super happy!";
}

