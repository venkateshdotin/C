/*To print the Factors of a Number N
* eg:- thr given number is 12
* Factors of Number N is 1 2 3 4 6 12
* terate all the numbers from 1 to n, checking if that number divides n and printing it
*/

#include <stdio.h>

int factorsofNumber(int Number)
{
    int i = 0;
    for(i = 1; i <= Number; i++)
    {
        if(Number % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main()
{
    int number;
    printf("To check the Factors of a Number N:\n");
    scanf("%d", &number);
    factorsofNumber(number);

    return 0;
}