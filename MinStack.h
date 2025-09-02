/*
 *  Tristan Jordan
 *  9/1/2025
 *  MinStack Class: Extension of Stack for NeetCode problem.
 *
 *  Question:
 *  Design a stack class that supports the push, pop, top, and getMin operations.
 *
 *  - MinStack() initializes the stack object.
 *  - void push(int val) pushes the element val onto the stack.
 *  - void pop() removes the element on the top of the stack.
 *  - int top() gets the top element of the stack.
 *  - int getMin() retrieves the minimum element in the stack.
 *
 *  Each function should run in O(1) time.
 */

#ifndef STACK_MINSTACK_H
#define STACK_MINSTACK_H
#include <vector>

class MinStack {
private:
    std::vector<int> stack;
    std::vector<int> minStack;
public:
    MinStack();
    void push(int value);
    void pop();
    int top();
    int getMin();
};

/*
 * If we need O(1) time on every function, then we
 * should also have a second stack to store the current minimum
 * encountered with each addition.
 */

MinStack::MinStack(){}

void MinStack::push(int value) {

    if (stack.size() == 0) {
        minStack.push_back(value);
    } else {
        int currentMinimum = minStack.back();

        if (value < currentMinimum) {
            minStack.push_back(value);
        } else {
            minStack.push_back(currentMinimum);
        }
    }

    // value being pushed will go onto normal stack regardless
    stack.push_back(value);
}


// this problem's def of pop doesn't reutrn element, just remove
void MinStack::pop() {
    if (stack.size() > 0) {
        stack.pop_back();
        minStack.pop_back();
    }
}


// this problem's def of top returns top el w/o removal
int MinStack::top() {
    if (stack.size() > 0) {
        return stack.back();
    }
}


// return min w/o removal
int MinStack::getMin() {
    if (stack.size() > 0) {
        return minStack.back();
    }
}


#endif //STACK_MINSTACK_H