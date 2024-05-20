#include <stdio.h>

int main()
{
    int a = 10;
    // Declaring pointer variable that points to Integer data type
    int *ptr; // which means this pointer is integer pointer;
    //Assigning the value of 'a' to the pointer ptr
    ptr = &a;

    printf("a   = %d\n", a); //printing 'a' value.
    printf("&a  = %d\n", &a);//printing address of a variable.
    printf("ptr = %d\n", ptr);//printing the pointer variable which is pointing the address of the variable a:
    printf("*ptr= %d\n",*ptr);//printing the dereference value of the pointer.
    printf("&ptr= %d\n",&ptr);//printing the address of the pointer
    printf("sizeof(a) = %d\n", sizeof(a)); //printing the size of a;
    printf("sizeof(*ptr) = %d\n", sizeof(*ptr));//printing the size of pointer ptr.
    return 0;
}