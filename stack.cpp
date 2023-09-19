#include "stack.hpp"

Stack::Stack() {
  //empty constructor
};

void Stack::push( int value ) {
  node = new Node( value ); //constructs new node w/ value
  node -> setPtr( TOP_NODE );
  TOP_NODE = node;
};

void Stack::pop() {
  if( TOP_NODE == nullptr )
  {
    std::cout << "Stack is empty\n";
  }
  else
  {
    Node *temporaryNode = TOP_NODE;
    TOP_NODE = TOP_NODE->getNextPtr();
    delete temporaryNode;
  }
};

void Stack::peek() {
  if( TOP_NODE == nullptr )
  {
    std::cout << "Stack is empty\n";
  }
  else
  {
    std::cout << TOP_NODE -> getData() << " is at the top of the stack\n";
  }
};

void Stack::show() {
  if( TOP_NODE == nullptr )
  {
    std::cout << "Stack is empty\n";
  }
  else
  {
    Node *temporaryNode = TOP_NODE;
    while( temporaryNode != NULL )
    {
      std::cout << temporaryNode -> getData() << " ";
      temporaryNode = temporaryNode -> getNextPtr();
    }
    std::cout << "are in the stack\n";
  }
}