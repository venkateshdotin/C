/*Sum of Natural Numbers in C
  Formula for Sum of First n natural numbers is : n(n+1)/2.
*/

#include <stdio.h>

int main()
{
    int start, end, sum, i;
    printf("Enter the starting number of Natural number:\n");
    scanf("%d", &start);
    printf("Enter the Ending number of natural number:\n");
    scanf("%d", &end);
    sum = 0;
    for( i = start; i <= end; i++)
    {
        sum += i;
    }
    printf("The sum of total number is %d\n", sum);

    return 0;
}