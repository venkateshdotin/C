/* To Find 2 Elements in the Array such that Difference between them is Largest.
 * 
 * */

#include <stdio.h>

int maximum_elements(int a[], int size)
{
	if (size < 2) {
		printf("Error: Array should have at least 2 elements.\n");
		return -1;  // Indicate error
    	}
	int largest = a[1] - a[0];
	int i = 0, j =0, diff = 0;
	for(i = 0; i < size; i++)
	{
		for(j = i+1; j < size;j++)
		{
			diff = a[j] - a[i];
			if(diff > largest)
			{
				largest = diff;
			}
		}
	}
	return largest;
}

int main()
{
	int size = 0, i = 0, j = 0, result = 0, temp = 0;
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
			if(array[i]>array[j])
			{
				temp = array[i];
				array[i]  = array[j];
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

	result = maximum_elements(array, size);

	if(result != -1)
	{
		printf("The Maximum different in the array is : %d\n", result);
	}

	return 0;
}
