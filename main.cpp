#include <iostream>
#include "stack.hpp"

int main() {
  Stack stack;
  int userInput, value;
  do
  {
    std::cout << "Select your operation:\n";
    std::cout << "1: Push a number into the stack\n";
    std::cout << "2: Pop the top number\n";
    std::cout << "3: Peek the top number\n";
    std::cout << "4: Show the whole stack\n";
    std::cout << "0: Exit\n";
    std::cin >> userInput;
    switch( userInput )
    {
      case 0:
        break;
      
      case 1:
        std::cout << "Enter a value: ";
        std::cin >> value;
        stack.push(value);
        break;
      
      case 2:
        stack.pop();
        break;

      case 3:
        stack.peek();
        break;

      case 4:
        stack.show();
        break;

      default:
        std::cout << "Invalid input\n";
        break;
    }
  } while( userInput != 0 );

  return 0;
}