#include<stdio.h>
#include<conio.h> 

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    return (sum == originalNum);
}

void main() {
    int number;
    clrscr();
    printf("Enter a number to check if it's a strong number: ");
    scanf("%d", &number);
    
    if (isStrongNumber(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }
    
    getch();
}