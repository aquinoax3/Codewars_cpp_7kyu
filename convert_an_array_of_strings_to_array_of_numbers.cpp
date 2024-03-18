// Oh no!
// Some really funny web dev gave you a sequence of numbers from his API response as an sequence of strings!

// You need to cast the whole array to the correct type.

// Create the function that takes as a parameter a sequence of numbers represented as strings and outputs a sequence of numbers.

// ie:["1", "2", "3"] to [1, 2, 3]

// Note that you can receive floats as well.



#include <vector>
#include <string>
#include <sstream>

std::vector<float> to_float_array(const std::vector<std::string>& arr) {
    std::vector<float> newArr;
    
    for(int i = 0; i < arr.size(); i++) {
        // create your string stream
        std::stringstream s;
        float num = 0;
        // insert number element from vector
        s << arr[i];
        // exctract the value from stream into float variable
        s >> num;
        // push the num into new vector
        newArr.push_back(num);  
    }
    return newArr;
}