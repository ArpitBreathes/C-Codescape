#include<stdio.h>
#include<conio.h>

// Function prototype
long factorial(int n);

void main() {
    int num;
    clrscr();
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        printf("Factorial of %d = %ld\n", num, factorial(num));
    }
    
    getch();
}

// Recursive function to calculate factorial
long factorial(int n) {
    if (n == 0 || n == 1) {  // Base case
        return 1;
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}