#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head = NULL; // Initialize head to NULL

void push() {
	int data;
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	if (ptr == NULL) {
		printf("Memory allocation failed.\n");
		return;
	}
	
	printf("Enter the Element to be pushed: ");
	scanf("%d", &data);
	ptr->data = data;
	ptr->next = head;
	head = ptr;
}

void pop() {
	if (head == NULL) {
		printf("The Stack is Empty!\n");
	} else {
		struct node *ptr = head;
		int top = ptr->data;
		head = head->next;
		free(ptr);
		printf("The popped element is: %d\n", top);
	}
}

void topPeek() {
	if (head == NULL) {
		printf("Stack is Empty!\n");
	}
	else {
		printf("The Top Element in the Stack: %d\n", head->data);
	}
}

void isEmpty() {
	if (head != NULL) {
		printf("Stack is not Empty.\n");
	}
	else {
		printf("Stack is Empty.\n");
	}
}

void display() {
	if (head == NULL) {
		printf("Stack is Empty!\n");
	}
	else {
		printf("Stack Elements (LIFO):\n");
		struct node *ptr = head;
		while (ptr != NULL) {
			printf("%d ", ptr->data);
			ptr = ptr->next;
		}
		printf("\n");
	}
}

int main() {
	int option;
	while (1) {
		printf("\nStack Operations using Linked List:\n");
		printf("1. POP\n2. PUSH\n3. TOP or PEEK\n4. isEmpty\n5. Display\n6. Exit\n");
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
				display();
				break;
			case 6:
				exit(0);
			default:
				printf("Please Enter a Correct Option.\n");
				break;
		}
	}
	
	return 0;
}

