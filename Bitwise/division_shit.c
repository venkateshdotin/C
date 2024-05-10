/*Write a program to divide an integer value 'x' by 2 using right shift operator.
 * */

#include <stdio.h>

int main()
{
        int number, temp;
        printf("Enter the number to divide by 2:\n");
        scanf("%d", &number);
        temp = number;
        number = number >> 1;
        printf("The given number is: %d divide by 2 is :%d\n", temp, number);

        return 0;
}

