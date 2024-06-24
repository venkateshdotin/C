/* Check if the Year is a Leap Year or Not in C
 *
 *  	Conditions for a Leap Year
 *  	For any year to be a leap year it must satisfy either of these conditions
 *  	1. Year must be divisible by 400.
 *  	2. Year must be divisible by 4 and not by 100 at the same time.
 *
 * */

#include <stdio.h>

int main()
{
	int year;
	printf("Enter the Year to check the Leap Year:\n");
	scanf("%d", &year);
	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		printf("The given year %d is Leap year :\n", year);
	}
	else
	{
		printf("The given year %d is not a Leap Year :\n", year);
	}

	return 0;
}
