/*To Check the given number is EVEN or ODD using bitwise operator
 *
 * logic :- (given number) & 1
 *
 * which means it will check the last bit of the given number with & 1 which gives 0 or 1
 * 0 means EVEN and 1 means ODD
 *
 * */

#include <stdio.h>

int main()
{
	int number;
	printf("Enter the number :\n");
	scanf("%d", &number);
	if(number & 1)
	{
		printf("The Given number %d is ODD number.\n", number);
	}
	else
	{
		printf("The Given number %d is EVEN number.\n", number);
	}


	return 0;
}
