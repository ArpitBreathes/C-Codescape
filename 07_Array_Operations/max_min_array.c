#include <stdio.h>

void main() {
    int n, i, arr[10], smallest_num, largest_num;
    clrscr();
    printf("Enter the no. of elements in the array (max 10): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid input! Number of elements must be between 1 and 10.\n");
        return 1; // Exit with error code
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest_num = arr[0];
    largest_num = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] < smallest_num) {
            smallest_num = arr[i];
        }
        if (arr[i] > largest_num) {
            largest_num = arr[i];
        }
    }

    printf("The largest number is %d and the smallest number is %d.\n", largest_num, smallest_num);
    getch();
}