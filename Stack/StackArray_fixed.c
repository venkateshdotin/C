#include <stdio.h>
#include <stdlib.h>

// Define the Array Size in Macro
#define SIZE 5

// Declare the Array and Top in Global Scope
int array[SIZE];
int top = -1;  // Top of the stack

/* Function to Push or Add a New Element to the Stack
 * Algorithm for Push Operation:
 * *	Before pushing the element to the stack, we check if the stack is full .
 * *	If the stack is full (top == capacity-1) , then Stack Overflows and we cannot insert the element to the stack.
 * *	Otherwise, we increment the value of top by 1 (top = top + 1) and the new value is inserted at top position .
 * * 	The elements can be pushed into the stack till we reach the capacity of the stack.
 *
 */
void push() {
	if (top == SIZE - 1) {
		printf("Stack Overflow!!!\n");
	} 
	else {
		int number;
		printf("Enter the Element to push into Stack: ");
		scanf("%d", &number);
		top++;
		array[top] = number;
	}
}

/* Function to Pop an Element from the Stack 
 * Algorithm for Pop Operation: 
 * *	Before popping the element from the stack, we check if the stack is empty .
 * *	If the stack is empty (top == -1), then Stack Underflows and we cannot remove any element from the stack.
 * * 	Otherwise, we store the value at top, decrement the value of top by 1 (top = top – 1) and return the stored top value.
 * 
 * */
void pop() {
	if (top == -1) {
		printf("Stack Underflow!!!\n");
	}
	else {
		printf("Popped Element: %d\n", array[top]);
		top--;
	}
}

/* Function to Peek the Top Element of the Stack.
 * Algorithm for Top Operation: 
 * *	Before returning the top element from the stack, we check if the stack is empty.
 * *	If the stack is empty (top == -1), we simply print “Stack is empty”.
 * *	Otherwise, we return the element stored at index = top 
 *
 * */
void topPeek() {
	if (top == -1) {
		printf("Stack is Empty!!!\n");
	}
	else {
		printf("Top or Peek Element: %d\n", array[top]);
	}
}

/* Function to Check if the Stack is Empty 
 * Algorithm for isEmpty Operation:
 * *	Check for the value of top in stack.
 * *	If (top == -1) , then the stack is empty so return true .
 * *	Otherwise, the stack is not empty so return false .
 *
 * */
void isEmpty() {
	if (top == -1) {
		printf("Stack is Empty!!!\n");
	}
	else {
		printf("Stack is not empty.\n");
	}
}

/* Function to Check if the Stack is Full
 * Algorithm for isFull Operation: 
 * *	Check for the value of top in stack.
 * *	If (top == capacity-1), then the stack is full so return true.
 * * 	Otherwise, the stack is not full so return false.
 *
 * */
void isFull() {
	if (top == SIZE - 1) {
		printf("Stack is FULL!!!\n");
	}
	else {
		printf("Stack is Not Full.\n");
	}
}

/*Function to Display the Elements of the Stack 
 * */
void display() {
	if (top == -1) {
		printf("Stack is Empty.\n");
	}
	else {
		printf("Stack Elements in LIFO order:\n");
		for (int i = top; i >= 0; i--) {
			printf("%d ", array[i]);
		}
		printf("\n");
	}
}

// Main Function to Drive the Stack Operations
int main() {
	int option;
	
	while (1) {
		
		printf("\nStack Operations:\n");
		printf("1. POP\n2. PUSH\n3. TOP or PEEK\n4. isEmpty\n5. isFull\n6. Display\n7. Exit\n");
		printf("Enter the Option: ");
		scanf("%d", &option);
		
		switch (option) {
			case 1:
				pop();
				break;
			case 2:
				push();
				break;
			case 3:
				topPeek();
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				isFull();
				break;
			case 6:
				display();
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Please Enter a Correct Option.\n");
				break;
		}
	}
	
	return 0;
}

