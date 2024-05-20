What is an Array?

An array is a collection of one or more values of the same data type stored in contiguous memory locations. The data type can be user-defined or even any other 
primitive data-type. Elements of an array can be accessed with the same array name by specifying the index number as the location in memory.

Types of Arrays
Arrays in C are classified into three types:

One-dimensional arrays
Two-dimensional arrays
Multi-dimensional arrays

Introduction to One Dimensional Array in C
--------------------------------------------------------
We can visualize a one-dimensional array in C as a single row to store the elements. All the elements are stored at contiguous memory locations. Now, we will see 
how to declare, initialize and access array elements:

Array
----------------------
An array is a data structure, used to store a collection of elements of the 
same type. Although an array is used to store a collection of data, it is often 
more useful to think of an array as a collection of variables of the same 
type. Each of those elements are identified by the same array name but 
with a different array index

in C all variables must be declared before they are used. This is needed to 
make sure the correct amount of memory is reserved. Arrays also occupy 
memory and as such they need to be declared as well. To allow for correct 
computation of the total amount of memory needed, the data type of each 
element as well as the number of elements the array will contain, is 
specified. In its most general form, the declaration of an array can be 
written as: 

type <array_name>[number_of_elements]; 

Initialization of the array can be done as shown in the code below:
int a[5] = {25, -2, 125, -25, 7}; 

int a[5]; 
a[0] = 25; 
a[1] = -2; 
a[2] = 125; 
a[3] = -25; 
a[4] = 7; 
