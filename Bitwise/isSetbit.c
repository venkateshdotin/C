/*To Set a particular bit in a given number using bitwise operator.
 *
 */

#include <stdio.h>

int main()
{
	int number, k;
	printf("Enter the number :\n");
	scanf("%d", &number);
	printf("Enter the bit two set:\n");
	scanf("%d", &k);
	printf("Before setting a particular bit :%d\n", number);
	number = number | (1 << k);
	printf("After setting a particular bit :%d\n", number);

	return 0;
}
