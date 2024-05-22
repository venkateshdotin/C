#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int number) {
    int reversed = 0, remainder = 0, original = number;
    if (number < 0) {
        return false;
    }
    while (number != 0) {
        remainder = number % 10;          // Get the last digit
        reversed = reversed * 10 + remainder;  // Append it to the reversed number
        number /= 10;                    // Remove the last digit
    }
    return original == reversed;        // Check if the original number is equal to the reversed number
}

int main() {
    int number;
    bool result;
    printf("Enter the number to be checked if it's a palindrome or not:\n");
    scanf("%d", &number);
    result = isPalindrome(number);
    if (result) {
        printf("The given number is a palindrome: %d\n", number);
    } else {
        printf("The given number is not a palindrome: %d\n", number);
    }
    return 0;
}
