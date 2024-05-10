/*Write a program to swap two values of integer variables using XOR operator.
 *
 * */

#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter two number :\n");
	scanf("%d%d", &x, &y);
	printf("The before swapping number is x = %d, y = %d .\n", x,y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("The After swapping two number is x = %d, y = %d .\n", x,y);
	
	return 0;	
}
