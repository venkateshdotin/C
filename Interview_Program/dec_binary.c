/*Convert the decimal number to binary Number */

#include <stdio.h>

int main()
{
	int dec, bin = 0, i = 1, rem;
	printf("Enter the decimal number :\n");
	scanf("%d", &dec);
    
	while(dec != 0)
	{
		rem = dec % 2;
		dec = dec / 2;
		bin = bin + rem * i;
		i *= 10;
	}
	printf("The binary number is %d\n", bin);
    
	return 0;
}
