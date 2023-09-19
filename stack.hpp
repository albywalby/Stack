#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include "node.hpp"

static Node *TOP_NODE;

class Stack {
 public:
  //constructor
  Stack();

  void push(int value); //insert
  void pop(); //delete the first element
  void peek(); //display first element with out deleting
  void show(); //show entire stack

 private:
  Node *node;
};

#endif