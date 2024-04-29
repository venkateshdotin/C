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