/* C Program to find the largest number in an array.
 *
 * */

#include <stdio.h>

int largestNumber(int a[],int size)
{
	if(size <= 0)
	{
		return 0;
	}
	int i = 0, j = 0, max = 0;
	max = a[0];
	for(i = 0; i < size; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	
	return max;
}

int main()
{
	int size, i, largest;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int array[size];  //Declaring array
	printf("Enter the Elements in Array: \n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	
	largest = largestNumber(array,size);
	
	printf("Printing the Elements in Array: \n");
        for(i = 0; i < size; i++)
        {
                printf("%d\t", array[i]);
        }
	printf("\n");
	printf("Largest number in the Elements in the Array: %d\n", largest);


	return 0;
}
