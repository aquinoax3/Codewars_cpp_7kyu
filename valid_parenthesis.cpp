// Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. The function should return true if the string is valid, and false if it's invalid.

// Examples
// "()"              =>  true
// ")(()))"          =>  false
// "("               =>  false
// "(())((()())())"  =>  true
// Constraints
// 0 <= length of input <= 100

// All inputs will be strings, consisting only of characters ( and ).
// Empty strings are considered balanced (and therefore valid), and will be tested.
// For languages with mutable strings, the inputs should not be mutated.

// Protip: If you are trying to figure out why a string of parentheses is invalid, paste the parentheses into the code editor, and let the code highlighting show you!


#include <string>
#include <stack>

bool validParentheses(const std::string& str) {
    std::stack<char> stack;
    
    for(char par : str) {
        if (par == '(') {
        stack.push(par);
        }
        if (par == ')') {
        /* trying to pop from an empty stack causes undefined behavior, 
        which can lead to a crash or other unexpected results. 
        Therefore, it's important to check if the stack is empty before attempting to pop an element.*/
        if(stack.empty()) {
            return false;
        }
        stack.pop();
        }
    }
    
    
    return stack.empty();
}