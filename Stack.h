/*
 *  Tristan Jordan
 *  8/23/2025
 *  Stack Class: Writing in Just Header File for Type Template <T>
 */

#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <vector>
template <typename T>

class Stack {
private:
    std::vector<T> stack;
public:
    // constructor
    Stack();

    // methods
    void push(T element);
    T pop();
    T peek();
    bool isEmpty();
};


// Constructor
template <typename T>
Stack<T>::Stack() {}

// use vector's push_back() to push onto stack
template <typename T>
void Stack<T>::push(T value) {
    stack.push_back(value);
}

// use vector's back() and pop_back() for returning element on top of stack
template <typename T>
T Stack<T>::pop() {
    T popped = stack.back();
    stack.pop_back();
    return popped;
}


// back() doesn't remove, so we can use it for peek
template <typename T>
T Stack<T>::peek() {
    return stack.back();
}

// vector.empty()
template <typename T>
bool Stack<T>::isEmpty() {
    return stack.empty();
}




#endif //STACK_STACK_H