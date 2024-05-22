/* Remove Duplicate Elements from an Array.
 * */

#include <stdio.h>

int main()
{
	int size, i, j, k, largest;
        printf("Enter the size of the array: ");
        scanf("%d", &size);
	if(size == 0)
	{
		printf("Array size is invalid, Exits !!!!\n");
		return -1;
	}
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
			if(array[i] == array[j])
			{
				for(k = j; k < size; k++)
				{
					array[k] = array[k+1];
				}
				j--;
				size--;
			}
		}
	}

	printf("Printing the Elements in Array: \n");
        for(i = 0; i < size; i++)
        {
                printf("%d\t", array[i]);
        }
        printf("\n");


	return 0;
}
