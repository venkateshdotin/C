/*To check the given is power of 2 or not by using bitwise operator.
 * 
 * */

#include <stdio.h>

void isPowerofTwo(int n)
{
	if((n & (n -1)) == 0)
	{
		printf("The Given number :%d is Power of 2.\n", n);
	}
	else
	{
		 printf("The Given number :%d is NOT Power of 2.\n", n);
	}
}

int main()
{
	int number;
	printf("Enter the number :\n");
	scanf("%d", &number);
	isPowerofTwo(number);

	return 0;
}
