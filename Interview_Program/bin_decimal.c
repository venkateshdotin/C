/*convert the binary number to decimal number*/
#include <stdio.h>

int main()
{
	int num = 10101;
	int dec = 0, i = 1, rem = 0;
	while(num != 0)
	{
		rem = num % 10;
		num /= 10;
		dec = dec +  rem * i;
		i*=2;
	}
	printf("The decimal value of the given number is :%d\n", dec);
	
	return 0;
}
