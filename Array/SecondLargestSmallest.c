/* To Find the Second Largest and Second smallest Elements in the Array.
 *
 * */

#include <stdio.h>

int main()
{
	int size, i, j, temp, largest;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int array[size];  //Declaring array
	
	printf("Enter the Elements in Array: \n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("Printing the Elements in Array: \n");
	for(i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	
	for(i = 0; i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	printf("Printing the Elements in Array after sorting: \n");
        for(i = 0; i < size; i++)
        {
                printf("%d\t", array[i]);
        }
        printf("\n");

	
	printf("The Second Smallest Elements in the Array is :%d \n", array[1]);
	printf("The Second Largest Elements in the Array is :%d \n", array[size - 2]);

	return 0;
}
