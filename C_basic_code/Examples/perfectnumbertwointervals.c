/* A perfect number is a positive integer that is equal to the sum of its positive proper divisors,
* that is, divisors excluding the number
*
* In this program to print perfect umber between two intervals
*/

#include <stdio.h>

int isPerfectnumber(int start, int end)
{
    int sum, number, i;
    for(number = start; number <= end; number++)
    {
        sum = 0;
        for(i = 1; i<= number/2; i++)
        {
            if(number % i == 0)
            {
                sum += i;
            }
        }
        if(sum == number)
        {
            printf("%d ", sum);
        }
    }
    printf("\n");

}

int main ()
{
    int start, end;
    printf("Enter the two interval number to check prefect number:\n");
    scanf("%d%d", &start, &end);
    isPerfectnumber(start, end);

    return 0;
}