#include <stdio.h>

int prime_number(int value)
{
    int flag = 0, i = 2;
    for(i = 2;i < (value/2); i++)
    {
        if(value % i == 0)
        {
            flag = 1;
        }
    }
    return flag;
}

int main()
{
    int number, flag;
    printf("Enter the number to check Prime or not a Prime number:\n");
    scanf("%d", &number);
    flag = prime_number(number);
    if(flag == 0)
    {
        printf("It is prime number :%d\n", number);
    }
    else
    {
        printf("It is not a prime number :%d\n", number);
    }

    return 0;
}