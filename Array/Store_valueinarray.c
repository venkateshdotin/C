/* An array is a data structure, used to store a collection of elements of the 
same type.
*/

#include <stdio.h>

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i = 0; i < array[10]; i++)
    {
        printf("Array value is :%d  ", array[i]);
    }
    printf("\n");

    return 0;
}