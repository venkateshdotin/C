/*To Subtract the two Given number using the bitwise opertor.
 *
 * */

#include <stdio.h>

int isSub(int num1, int num2)
{
        int carry = 0;
        while(num2 != 0)
        {
                carry = (~num1) & num2;
                num1 = num1 ^ num2;
                num2 =  carry << 1;
        }

        return num1;
}

int main()
{
        int number1,number2, result;
        printf("The Enter two number :\n");
        scanf("%d%d", &number1, &number2);
        result = isSub(number1,number2);
        printf("The Subtract of the given number %d, %d is : %d \n", number1, number2, result);

        return 0;
}

