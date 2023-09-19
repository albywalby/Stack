#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

class Node {
 public:
  Node(): mData(0), nextPtr(NULL){ };
  Node(int val): mData(val), nextPtr(NULL){ };
  Node(int val, Node* ptr): mData(val), nextPtr(ptr){ };

  int getData() const {return mData;}
  Node* getNextPtr() const {return nextPtr;}

  void setData(int data) {
    mData = data;
  }

  void setPtr(Node *ptr) {
    nextPtr = ptr;
  }

 private:
  int mData;
  Node *nextPtr;
};

#endif