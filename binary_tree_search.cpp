// Given a number and a binary tree ( not a Binary Search Tree! ):

// return True/true if the given number is in the tree
// return False/false if it isn't


#include <stack>
#include <iostream>

struct Node{
  int val;
  Node *left = nullptr;
  Node *right = nullptr;
};


bool search(int n, Node *root){
  if (root == nullptr) {
    return false;
  }
  
  std::stack<Node*> stack;
  stack.push(root);
  
  while (!stack.empty()) {
    Node* curr = stack.top();
    stack.pop();
    
    if (curr->val == n) {
      return true;
    }
    
    if (curr->right != nullptr) {
      stack.push(curr->right);
    }
    
    if (curr->left != nullptr) {
      stack.push(curr->left);
    }
  }
  
  return false;
}
