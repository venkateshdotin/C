Stack in C
------------
A stack is a linear data structure, a collection of items of the same type.

In a stack, the insertion and deletion of elements happen only at one endpoint. The behavior of a stack is described as “Last In, First Out” (LIFO). When an element is “pushed” onto the stack, it becomes the first item that will be “popped” out of the stack. To reach the oldest entered item, you must pop all the previous items.

The stack is used to solve a few of the general problems like:
* Tower of Hanoi
* N-Queens Problem
* Infix to Prefix Conversion

Types of Stack Data Structure:
---------------------------------
* **Fixed Size Stack :** As the name suggests, a fixed size stack has a fixed size and cannot grow or shrink dynamically. If the stack is full and an attempt is made to add an element to it, an overflow error occurs. If the stack is empty and an attempt is made to remove an element from it, an underflow error occurs.
* **Dynamic Size Stack :** A dynamic size stack can grow or shrink dynamically. When the stack is full, it automatically increases its size to accommodate the new element, and when the stack is empty, it decreases its size. This type of stack is implemented using a linked list, as it allows for easy resizing of the stack.

Basic Operations on Stack Data Structure:
---------------------------------------------
In order to make manipulations in a stack, there are certain operations provided to us.

* push() to insert an element into the stack
* pop() to remove an element from the stack
* top() Returns the top element of the stack.
* isEmpty() returns true if stack is empty else false.
* isFull() returns true if the stack is full else false.
