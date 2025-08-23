/*
 *  Tristan Jordan
 *  8/23/2025
 *  Stack Class: Header File
 */

#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <vector>

class Stack {
private:
    std::vector<int> stack;
public:
    // constructor
    Stack();

    // methods
    void push(int element);
    int pop();
    int peek();
    bool isEmpty();
};


#endif //STACK_STACK_H