/* To print the duplicate elements in the Array. 
 *
 *  */


#include <stdio.h>

void duplicateElements(int a[], int size) {
	int i, j;
	int hasDuplicates = 0;  // Flag to check if there are any duplicates
	printf("Duplicate Elements in the given Array:\n");
	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (a[i] == a[j]) {
				printf("%d\n", a[i]);
				hasDuplicates = 1;
				break;  // Once a duplicate is found for a[i], no need to check further
			}
		}
	}
	if (!hasDuplicates) {
        printf("No duplicates found.\n");
    }
}

int main() {
	int array[10];
	int size = sizeof(array) / sizeof(array[0]);
	int i;
	printf("Enter %d elements in the array:\n", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &array[i]);  // Validate integer input
    	}
	
	printf("Printing Array elements:\n");
	for (i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}
	printf("\n");
	duplicateElements(array, size);
	
	return 0;
}

