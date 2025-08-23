/*
 *  Tristan Jordan
 *  8/23/2025
 *  Stack Class: Methods
 */

#include "Stack.h"
#include <vector>

// Constructor
Stack::Stack() {}

// use vector's push_back() to push onto stack
void Stack::push(int value) {
    stack.push_back(value);
}

// use vector's back() and pop_back() for returning element on top of stack
int Stack::pop() {
    int popped = stack.back();
    stack.pop_back();
    return popped;
}

// back() doesn't remove, so we can use it for peek
int Stack::peek() {
    return stack.back();
}

// vector.empty()
bool Stack::isEmpty() {
    return stack.empty();
}