/* To toggle the particaulr bit using bitwise operator.
 *
 * If Kth bit is 1, then change it to 0 and vice-versa.
 *
 * Kth is position or particular bit position.
 * */

#include <stdio.h>

int main()
{
	int number, k;
	printf("Enter the number :\n");
	scanf("%d",&number);
	printf("Enter the Kthe position bit :\n");
	scanf("%d", &k);
	printf("Before Toggling the particular bit :%d %x\n", number, number);
	number = number ^ (1 << k);
	printf("After clearing the bit at position %d: %d (decimal), %x (hexadecimal)\n", k, number, number);

	return 0;
}
