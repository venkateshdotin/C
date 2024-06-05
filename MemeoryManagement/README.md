Memory management
-----------------------
Memory management is a crucial aspect of programming. To effectively manage memory, developers must understand the various segments of memory that a program utilizes. These segments include the stack, heap, BSS (Block Started by Symbol), data, and text segments. Each segment plays a distinct role in a program's execution and memory management.
In C programming, the memory layout consists of the following sections:

1. Text segment
2. Initialized data segment
3. Uninitialized data segment
4. Heap
5. Stack

![image](https://github.com/venkateshdotin/C_Example_code/assets/53397309/48d8a5db-5776-462c-91f4-45cced1b1f7b)

   
![image](https://github.com/venkateshdotin/C_Example_code/assets/53397309/344dd3d2-4f26-4ce7-b4dd-fadced885c1e)

![image](https://github.com/venkateshdotin/C_Example_code/assets/53397309/83635381-83a6-4ec7-8109-7ae4ef8c4d0d)

1. **Text segment**
-> The text segment, also known as the code segment, contains the compiled machine code of the program's instructions. This segment is read-only and holds the executable instructions that the CPU fetches and executes during the program's runtime.
-> Since the text segment is read-only, attempts to modify its contents will result in segmentation faults or program crashes. This segment is responsible for the program's actual functionality and execution flow.

-> After we compile the program, a binary file generates, which is used to execute our program by loading it into RAM. This binary file contains instructions, and these instructions get stored in the text segment of the memory.
-> Text segment has read-only permission that prevents the program from accidental modifications.
-> Text segment in RAM is shareable so that a single copy is required in the memory for frequent applications like a text editor, shells, etc.

2. **Data Segement
  _ Initialized data segment_**
->Initialized data segment or data segment is part of the computer's virtual memory space of a C program that contains values of all external, global, static, and constant variables whose values are initialized at the time of variable declaration in the program. Because the values of variables can change during program execution, this memory segment has read-write permission. We can further classify the data segment into the read-write and read-only areas. const variable comes under the read-only area. The remaining types of variables come in the read-write area. For example,

_const hello* = "Data segment";_
-> Here, the pointer variable hello comes under the read-write area, and the value of the string literal "Data segment" lies comes under initialized read-only data segment.
-> The data segment holds initialized global and static variables. These variables have predefined values set during program compilation. Unlike the BSS segment, the data segment consumes space in the executable to store both variables and their initial values.
-> Global variables, which can be accessed throughout the program, and static variables, which are limited to their defining scope, are stored in the data segment. For example, int globalVar = 42; would result in the storage of globalVar in the data segment.
**BSS (Block Started by Symbol) Segment:**__ or **_uninitialized data segment_**
-> The BSS segment contains uninitialized global and static variables. These variables are initialized to zero or null values before the program begins execution. Since these variables are not explicitly initialized in the code, the BSS segment reduces the size of the executable, as only the variables and sizes are stored.
-> An uninitialized data segment is also known as bss (b​lock started by symbol). The program loaded allocates memory for this segment when it loads. Every data in bss is initialized to arithmetic 0 and pointers to null pointer by the kernel before the C program executes. BSS also contains all the static and global variables, initialized with arithmetic 0. Because values of variables stored in bss can be changed, this data segment has read-write permissions.

3. **Stack Segment:**

-> The stack is a region of memory used to manage function calls and local variables. It operates as a Last-In-First-Out (LIFO) data structure, meaning the most recently added item is the first to be removed. When a function is called, its local variables and function parameters are allocated on the stack. As functions exit, their allocated stack space is deallocated, making the stack efficient for managing scope-bound data i.e. It grows and shrinks automatically during function calls and returns.
Stack memory is limited, and excessive allocation or deep function call chains can lead to stack overflow, causing the program to crash.

4. **Heap Segment:**

-> Unlike the stack, the heap is a dynamic memory region used for dynamic memory allocation. Memory allocated on the heap must be explicitly managed by the programmer using functions like malloc(), calloc(), realloc() and free(). Heap memory is not deallocated automatically and can persist beyond the scope of a single function.
-> The heap is essential for handling data structures with dynamic sizes, like arrays whose sizes are determined at runtime or complex data structures like linked lists and trees. Improper heap memory management can lead to memory leaks or fragmentation, where memory becomes inefficiently utilized due to small chunks of allocated but unused memory.


Reference Links::
https://www.linkedin.com/pulse/understanding-memory-layout-stack-heap-bss-data-text-segments-shah/
