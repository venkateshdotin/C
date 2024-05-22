/* The sum of the given individual digit. */
#include <stdio.h>

int getSum(int number)
{
    int sum = 0, rem;
    while (number != 0)
    {
        rem = number % 10;
        sum  += rem;
        number /= 10;
    }
    return sum;    
}

int main()
{
    int number, result;
    printf("Enter the number of sum of individual digit:\n");
    scanf("%d", &number);
    result  = getSum(number);
    printf("The sum of individual digit of the given number : %d\n", result);

    return 0;
}