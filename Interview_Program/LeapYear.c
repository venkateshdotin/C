/*To Write a C code to check the Given year is Leap year or Not*/

#include <stdio.h>

int main()
{
	int year;
	printf("Enter the year to check leap year or not:\n");
	scanf("%d", &year);
	
	if((year % 400 == 0) || ((year % 4) == 0) && (year %100 != 0))
	{
		printf("The Given year is Leap Year :%d\n", year);
	}
	else{
		printf("The Given year is Not Leap Year :%d\n", year);
	}
	
	return 0;
}
