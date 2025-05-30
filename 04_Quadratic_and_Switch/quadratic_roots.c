#include <stdio.h>
void main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;
    clrscr();
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // Condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    // Condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %.2lf\n", root1);
    }
    // If roots are not real (complex)
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi\n", 
               realPart, imagPart, realPart, imagPart);
    }

    getch();
}