/*to print the prime number in the given range from start to stop range.*/

#include <stdio.h>

int main()
{
    int start, end, i = 0, flag = 0, j;
    printf("Enter the start and stop ofnumber to find the prime in between that :\n");
    scanf("%d%d", &start, &end);
    printf("The print the prime number betwen %d and %d .\n", start, end);
    for(i = start; i <= end; i++)
    {
        flag = 0;
        for(j = 2; j<= i/2; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}