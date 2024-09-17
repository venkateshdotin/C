C Unions
--------------

The Union is a user-defined data type in C language that can contain elements of the different data types just like structure. But unlike structures, all the members in the C union are stored in the same memory location. Due to this, only one member can store data at the given instance.

Syntax of Union in C ::

The syntax of the union in C can be divided into three steps which are as follows:

C Union Declaration
-----------------------
In this part, we only declare the template of the union, i.e., we only declare the members’ names and data types along with the name of the union. No memory is allocated to the union in the declaration.

union union_name {
    datatype member1;
    datatype member2;
    ...
};

Different Ways to Define a Union Variable
----------------------------------------------
We need to define a variable of the union type to start using union members. There are two methods using which we can define a union variable.

1. With Union Declaration
2. After Union Declaration

1. Defining Union Variable with Declaration
union union_name {
    datatype member1;
    datatype member2;
    ...
} var1, var2, ...;
2. Defining Union Variable after Declaration
union union_name var1, var2, var3...;


Size of Union
--------------------------
The size of the union will always be equal to the size of the largest member of the array. All the less-sized elements can store the data in the same space without any overflow.


Q&A
--------

**1. Can we store data in multiple union members at the same time?**
--------------------------------------------------------------
No. We can only store data in a single member at the same time. For example in the following C program, both x and y share the same location. If we change x, we can see the changes being reflected in y. 


// C program to check if we can store data in multiple union
// members
#include <stdio.h>
 
// Declaration of union is same as structures
union test {
    int x, y;
};
 
int main()
{
    // A union variable t
    union test t;
 
    t.x = 2; // t.y also gets value 2
    printf("After making x = 2:\n x = %d, y = %d\n\n", t.x,
           t.y);
 
    t.y = 10; // t.x is also updated to 10
    printf("After making y = 10:\n x = %d, y = %d\n\n", t.x,
           t.y);
    return 0;
}

**Output::**

After making x = 2:
 x = 2, y = 2

After making y = 10:
 x = 10, y = 10


**2. What are the applications of unions?**
-----------------------------------------
Unions can be useful in many situations where we want to use the same memory for two or more members. For example, suppose we want to implement a binary tree data structure where each leaf node has a double data value, while each internal node has pointers to two children, but no data.
