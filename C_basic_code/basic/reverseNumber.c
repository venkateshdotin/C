/* Reverse a Number in C
 *
 * */

#include <stdio.h>

int isReverse(int num)
{
	int sum, rem, temp;
	temp = num;
	sum  = 0;
	while(temp > 0)
	{
		rem = temp % 10;
		sum = rem + sum * 10;
		temp /= 10;
	}
	return sum;
}

int main()
{
	int number, result;
	printf("Enter the Number to be Reversed :\n");
	scanf("%d", &number);
	result = isReverse(number);

	printf("The Given number %d is revesed number is %d.\n", number, result); 

	return 0;
}
