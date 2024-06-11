Array of Pointers in C
-----------------------------

In C, a pointer array is a homogeneous collection of indexed pointer variables that are references to a memory location. It is generally used in C Programming when we want to point at multiple memory locations of a similar data type in our C program. We can access the data by dereferencing the pointer pointing to it.

Syntax:

	pointer_type *array_name [array_size];

Here,

* pointer_type: Type of data the pointer is pointing to.
* array_name: Name of the array of pointers.
* array_size:  Size of the array of pointers.

Application of Array of Pointers
------------------------------------------
An array of pointers is useful in a wide range of cases. Some of these applications are listed below:

1. It is most commonly used to store multiple strings.
2. It is also used to implement LinkedHashMap in C and also in the Chaining technique of collision resolving in Hashing.
3. It is used in sorting algorithms like bucket sort.
4. It can be used with any pointer type so it is useful when we have separate declarations of multiple entities and we want to store them in a single place.

Disadvantages of Array of Pointers
------------------------------------------
The array of pointers also has its fair share of disadvantages and should be used when the advantages outweigh the disadvantages. Some of the disadvantages of the array of pointers are:

1. Higher Memory Consumption: An array of pointers requires more memory as compared to plain arrays because of the additional space required to store pointers.
2. Complexity: An array of pointers might be complex to use as compared to a simple array.
3. Prone to Bugs: As we use pointers, all the bugs associated with pointers come with it so we need to handle them carefully.
