/* Number is Prime Number or Not
 *
 * 	A prime number is a number which can be divided by 1 and itself.
 * 	A number which can not be divided by any other number other than 1 or itself is a prime number.
 * 	It should have only 2 factors. They are, 1 and the number itself.
 * */

#include <stdio.h>

int isPrime(int num)
{
    if(num <= 1) // Checking for numbers less than or equal to 1
    {
        return 0;
    }
    for(int i = 2; i <= num / 2; i++) // Loop from 2 to num/2
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1; // If no divisors are found, return 1 (true)
}

int main()
{
    int number, result;
    printf("Enter the Number to check Prime or Not :\n");
    scanf("%d", &number);
    result = isPrime(number);

    if(result){
        printf("The Given number %d is a Prime Number.\n", number);
    }
    else{
        printf("The Given Number %d is Not a Prime Number.\n", number);
    }

    return 0;
}

