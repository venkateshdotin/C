/* Write a program to multiply an integer value 'x' by 2 using left shift operator.
 *
 *  */

#include <stdio.h>

int main()
{
	int number, temp;
	printf("Enter the number to multiple by 2:\n");
	scanf("%d", &number);
	temp = number;
	number = number << 1;
	printf("The given number is: %d multiple by 2 is :%d\n", temp, number);

	return 0;
}
