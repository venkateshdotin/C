#include <stdio.h>

int main()
{
    int number1, number2, result;
    printf("Enter the Two Number to be sum:\n");
    scanf("%d%d", &number1, &number2);
    result = number1 + number2;

    printf("The sum of two number is : %d\n", result);
    return 0;
}