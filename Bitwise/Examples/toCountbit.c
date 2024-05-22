/*Write a program to count the number of set bits in a given integer.
 *
 * */

#include <stdio.h>

int toCount_bit(int a)
{
	int count = 0;
	while(a != 0)
	{
		if(a & 1)
			count++;
		a = a >> 1;
	}
	return count;
}

int main()
{
	int number,result;
	printf("Enter the number :\n");
	scanf("%d",&number);
	result = toCount_bit(number);
	printf("The count of set bit in given number is :%d and count is: %d\n", number, result);

	return 0;
}
