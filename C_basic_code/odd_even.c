#include <stdio.h>

int odd_even(unsigned int number)
{
    if(number % 2 ==0)
    {
        printf("The given number %d is EVEN number. \n", number);
    }
    else{
        printf("The given number %d is ODD number. \n", number);
    }
}

int main()
{
    unsigned int number1;
    printf("Enter the number to check odd or even:\n");
    scanf("%d", number1);
    odd_even(number1);

    return 0;
}