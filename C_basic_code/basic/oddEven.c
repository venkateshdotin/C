#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number to check:\n");
    scanf("%d", &number);
    if(number % 2 == 0)
    {
        printf("The given number %d is Even \n", number);
    }
    else
    {
        printf("The given number %d is odd \n", number);
    }

    return 0;
}