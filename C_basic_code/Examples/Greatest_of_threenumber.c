#include <stdio.h>

void greatest_ofthree(int number1, int number2, int number3)
{
    if((number1 >= number2) && (number1 >= number3))
    {
        printf("The greatest number amoung three is  : %d\n", number1);
    }
    else if((number2 >= number3) && (number2 >= number1))
    {
        printf("The greatest number amoung three is  : %d\n", number2);
    }
    else
    {
        printf("The greatest number amoung three is  : %d\n", number3);
    }

}

int main()
{
    int number1, number2, number3;
    printf("Enter the threee number to greatest number :\n");
    scanf("%d%d%d", number1, number2, number3);
    greatest_ofthree(number1,number2,number3);
    //greatest_ofthree(10,20,30);

    return 0;
}