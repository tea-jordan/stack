/*
 *  Tristan Jordan
 *  8/23/2025
 *  Main File for Testing Stack Operations
 */

#include <iostream>
#include "Stack.h"
#include "MinStack.h"

bool isValidParenString(const std::string& s) {

    Stack<char> stack = Stack<char>();

    for (int i = 0; i < s.length(); i++) {

        char c = s[i];

        // push any open parens onto the stack
        if (c == '(' || c == '{' || c == '[') {
            stack.push(s[i]);
        }

        if (c == ')' || c == '}' || c == ']') {
             // if we encounter a close with no open, must be imbalanced
             if (stack.isEmpty()) {
                 return false;
             }
            // if here, there is something in the stack
            char lastOpen = stack.pop();
            if ((lastOpen == '(' && c != ')') || (lastOpen == '{' && c != '}') || (lastOpen == '[' && c != ']')) {
                return false;
            }
        }
    }

    if (!stack.isEmpty()) {
        return false;
    }
    return true;
}

int main() {

    std::cout << "\n ============================== Testing Integer Stack ==============================\n" << std::endl;

    Stack<int> stack = Stack<int>();

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Current element on top of stack is: " << stack.peek() << std::endl;

    stack.pop();

    std::cout << "After popping one element, current element on top of stack is: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "After popping all elements, stack is empty?: " << stack.isEmpty() << std::endl;


    std::cout << "\n ============================== Testing Char Stack for Parens ==============================\n" << std::endl;

    std::string validParens = "()(){{[]}}[([()])]";
    std::string invalidParens = "(((";
    std::string invalidParensTwo = "}}}";
    std::string invalidParensThree = "{}{}[}";
    std::string invalidParensFour = "{}{}{)";

    std::cout << validParens << " is valid? - " << isValidParenString(validParens) << std::endl;
    std::cout << invalidParens << " is valid? - " << isValidParenString(invalidParens) << std::endl;
    std::cout << invalidParensTwo << " is valid? - " << isValidParenString(invalidParensTwo) << std::endl;
    std::cout << invalidParensThree << " is valid? - " << isValidParenString(invalidParensThree) << std::endl;
    std::cout << invalidParensFour << " is valid? - " << isValidParenString(invalidParensFour) << std::endl;

    std::cout << "\n ============================== Testing MinStack ==============================\n" << std::endl;

    MinStack minStack = MinStack();

    minStack.push(3);
    std::cout << "The top of the MinStack is: " <<
        minStack.top() << " and the current minimum is: " << minStack.getMin()
        << std::endl;

    minStack.push(13);
    std::cout << "The top of the MinStack is: " <<
        minStack.top() << " and the current minimum is: " << minStack.getMin()
        << std::endl;

    return 0;
}