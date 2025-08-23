/*
 *  Tristan Jordan
 *  8/23/2025
 *  Main File for Testing Stack Operations
 */

#include <iostream>
#include "Stack.h"

int main() {

    Stack stack = Stack();

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Current element on top of stack is: " << stack.peek() << std::endl;

    stack.pop();

    std::cout << "After popping one element, current element on top of stack is: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "After popping all elements, stack is empty?: " << stack.isEmpty() << std::endl;

    return 0;
}