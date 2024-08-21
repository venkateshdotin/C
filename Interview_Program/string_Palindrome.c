/*To check the Given String is Palindrome or Not*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindromeString(const char *str) {
	int left = 0;
	int right = strlen(str) - 1;
	
	while (left < right) {
		if (str[left] != str[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int main() {
	char str[255];
	printf("Enter a string:\n");
	fgets(str, sizeof(str), stdin);

    	// Remove newline character if present
	str[strcspn(str, "\n")] = '\0';
	
	if (isPalindromeString(str)) {
		printf("'%s' is a palindrome.\n", str);
	}
	else {
		printf("'%s' is not a palindrome.\n", str);
	}
	
	return 0;
}
