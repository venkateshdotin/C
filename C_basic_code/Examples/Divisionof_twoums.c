#include <stdio.h>

int main()
{
    int number1, number2, result;
    printf("Enter the number to divide :\n");
    scanf("%d%d", &number1, &number2);
    if((number1 >= 0) && (number2 >= 0))
    {
        if(number1 > number2)
        {
            result = number1 / number2;
            printf("The value after division of two numbers: %d\n", result);
        }
        else
        {
            result = number2 / number1;
            printf("The value after division of two numbers: %d\n", result);
        }
    }
    else{
        printf("This two numbers cannot be divible \n");
    }

    return 0;
}