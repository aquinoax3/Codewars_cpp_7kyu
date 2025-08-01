// Convert a linked list to a string
// Related Kata
// Although this Kata is not part of an official Series, you may also want to try out Parse a linked list from a string if you enjoyed this Kata.

// Preloaded
// Preloaded for you is a class, struct or derived data type Node ( depending on the language ) used to construct linked lists in this Kata:

// class Node
// {
//   public:
//     int data;
//     Node* next;
  
//   Node(int data, Node* next = nullptr)
//   {
//     this->data = data;
//     this->next = next;
//   }
// };
// Prerequisites
// This Kata assumes that you are already familiar with the idea of a linked list. If you do not know what that is, you may want to read this article on Wikipedia. Specifically, the linked lists this Kata is referring to are singly linked lists, where the value of a specific node is stored in its data / $data / Data property, the reference to the next node is stored in its next / $next / Next / next_node property and the terminator for a list is null / NULL / None / nil / nullptr / null().

// Task
// Create a function stringify which accepts an argument list / $list and returns a string representation of the list. The string representation of the list starts with the value of the current Node, specified by its data / $data / Data property, followed by a whitespace character, an arrow and another whitespace character (" -> "), followed by the rest of the list. The end of the string representation of a list must always end with null / NULL / None / nil / nullptr / null() ( all caps or all lowercase depending on the language you are undertaking this Kata in ). For example, given the following list:

// new Node(1, new Node(2, new Node(3)))
// ... its string representation would be:

// "1 -> 2 -> 3 -> nullptr"
// And given the following linked list:

// ... its string representation would be:

// "0 -> 1 -> 4 -> 9 -> 16 -> nullptr"
// Note that null / NULL / None / nil / nullptr / null() itself is also considered a valid linked list. In that case, its string representation would simply be "null" / "NULL" / "None" / "nil" / "nullptr" / @"NULL" / "null()" ( again, depending on the language ).

// For the simplicity of this Kata, you may assume that any Node in this Kata may only contain non-negative integer values. For example, you will not encounter a Node whose data / $data / Data property is "Hello World".

// Enjoy, and don't forget to check out my other Kata Series :D


#include <string>
#include <iostream>

std::string stringify(Node* list) {
  Node* curr = list;
  std::string result = "";
  
  while (curr != nullptr) {
    std::string numStr= std::to_string(curr->data);
    result += numStr;
    result += " -> ";
    curr = curr->next;
  }
  
  result += "nullptr";
  
  
  return result;
}
