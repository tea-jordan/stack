
# Stack

This project implements a stack in C++.
All stack operations can be done using a dynamic array, 
so we will use C++'s dynamic array, `std::vector`.

Stacks are LIFO (Last In First Out), and will include
the methods:

* `push(T value)` - adds the given value to the top of the stack. 
* `pop()` - removes and returns the item on top of the stack. 
* `peek()` - returns the item on top of the stack without removal. 
* `isEmpty()` - bool for whether stack is empty. 

---

# MinStack

For the `NeetCode 150` Minimum Stack problem, a modified version 
of a stack was created with the following operations:

- `MinStack()`: creates a new MinStack object. 
- `void push(int val)`: pushes an integer onto the stack. 
- `void pop()` removes the element on the top of the stack. 
- `int top()` returns the top element of the stack. 
- `int getMin()` returns the current minimum element of the stack. 

All operations run in O(1) time, and this is done so by having the `MinStack` object
keep track of two stacks, one for the actual values, and the other for the minimum value.