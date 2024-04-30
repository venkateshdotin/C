/* A perfect number is a positive integer that is equal to the sum of its positive proper divisors,
* that is, divisors excluding the number
*/

#include <stdio.h>
#include <stdbool.h>

bool isPerfectnumber(int number)
{
    int i = 0, sum = 0;

    if(number < 0)
        return false;
    else
    {
        for(i = 1; i<= number/2; i++)
        {
            if(number % i == 0)
            {
                sum += i;
            }
        }
    }
    return sum == number;

}


int main()
{
    int number;
    bool result;
    printf("Enter the number to check prefect number or not:\n");
    scanf("%d", &number);
    result = isPerfectnumber(number);
    if(result)
        printf("The given number is perfect number :%d \n", number);
    else
        printf("The given number is not a perfect number :%d \n", number);

    return 0;
}