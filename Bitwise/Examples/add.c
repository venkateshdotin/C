/* To Sum the two given number using bitwise operator
 * 
 * */

#include <stdio.h>

int isSum(int num1, int num2)
{
	int carry = 0;
	while(num2 != 0)
	{
		carry = num1 & num2;
		num1 = num1 ^ num2;
		num2 =  carry << 1;
	}

	return num1;
}

int main()
{
	int number1,number2, result;
	printf("The Enter two number :\n");
	scanf("%d%d", &number1, &number2);
	result = isSum(number1,number2);
	printf("The sum of the given number %d, %d is : %d \n", number1, number2, result);

	return 0;
}
