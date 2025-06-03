#include<stdio.h>
#include<conio.h>

// Recursive function to find GCD
int gcd(int a, int b) {
    // Base case: if b is 0, GCD is a
    if (b == 0)
        return a;
    // Recursive case: call gcd with b and a modulo b
    else
        return gcd(b, a % b);
}

void main() {
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Ensure we work with positive numbers
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    
    getch();
}