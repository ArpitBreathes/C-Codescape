#include<stdio.h>
#include<conio.h>

// Function to calculate factorial iteratively
int factorial(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    
    return result;
}

void main() {
    int num;
    clrscr();
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    
    getch();
}