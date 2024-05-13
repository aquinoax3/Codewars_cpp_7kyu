// You will be given a string (x) featuring a cat 'C' and a mouse 'm'. The rest of the string will be made up of '.'.

// You need to find out if the cat can catch the mouse from it's current position. The cat can jump over three characters. So:

// C.....m returns 'Escaped!' <-- more than three characters between

// C...m returns 'Caught!' <-- as there are three characters between the two, the cat can jump.


#include <string>

std::string cat_mouse(std::string x) {
    int catIdx = x.find('C');
    int mouseIdx = x.find('m');
    
    if (catIdx < mouseIdx) {
        catIdx + 4;
        if (mouseIdx - catIdx <= 4) {
        return "Caught!";
        } else {
        return "Escaped!";
        }
    }
    
    if (mouseIdx < catIdx) {
        mouseIdx + 4;
        if (catIdx - mouseIdx <= 4) {
        return "Caught!";
        } else {
        return "Escaped!";
        }
    }
    
}