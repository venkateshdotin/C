/* To Swap a two particular bit in the given number using bitwise operator.
 * 
 * */

#include <stdio.h>

int main()
{
	int number, p1, p2, temp,result;
	printf("Enter the number :\n");
	scanf("%d", &number);
	printf("Enter the poistion p1 and p2:\n");
	scanf("%d%d", &p1, &p2);
	temp = ((number >> p1) & 1) ^ ((number >> p2) & 1);
	temp = (temp << p1) | (temp << p2);
	result = number ^ temp;
	printf("The given number is %d and p1 = %d, p2 = %d.\n", number, p1, p2);
	printf("The swap of two particular bit in the given number is = %d.\n", result);

	return 0;
}
