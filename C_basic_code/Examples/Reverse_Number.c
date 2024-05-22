#include <stdio.h>

int reverse_number(int value)
{
    int rem,sum = 0;
    while(value != 0)
    {
        rem = value % 10;
        sum = rem + (sum * 10);
        value =  value / 10;
    }
    printf("The Given value is Reversed : %d\n", sum);

}

int main()
{
    int number;
    printf("Enter the number to reversed :\n");
    scanf("%d", &number);
    reverse_number(number);
    
    return 0;
}