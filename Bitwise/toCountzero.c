/* Write a program to count the number of zeroes in a given integer using bitwise operator.
 * 
 * */

#include <stdio.h>

int toCount_bit(int a)
{
        int count = 0;
        while(a != 0)
        {
                if((a & 1) == 0)
                        count++;
                a = a >> 1;
        }
        return count;
}

int main()
{
        int number,result;
        printf("Enter the number :\n");
        scanf("%d",&number);
        result = toCount_bit(number);
        printf("The count of all zero bit in given number is :%d and count is: %d\n", number, result);

        return 0;
}

