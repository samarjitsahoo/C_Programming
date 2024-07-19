#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("This number is a palindrome\n");
    } else {
        printf("This number is not a palindrome\n");
    }

    return 0;
}
