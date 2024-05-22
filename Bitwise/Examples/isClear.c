/* To clear a particaulr bit in a given number using bitwise operator.
 *
 * k = position or bit position always it start with zero 0.
 *
 * */

#include <stdio.h>

int main()
{
	int number, k;
	printf("Enter the number :\n");
	scanf("%d", &number);
	printf("Enter the position to clear bit :\n");
	scanf("%d", &k);
	printf("Before the clearing the bit : %d %x\n", number, number);
	number = number & (~(1 << k));
	printf("After clearing the bit at position %d: %d %x\n", k, number, number);

	return 0;
}
