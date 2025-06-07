#include<stdio.h>
#include<conio.h>
// Function to input a matrix
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int m1, int n1, int matrix1[m1][n1], 
                     int m2, int n2, int matrix2[m2][n2], 
                     int result[m1][n2]) {
    // Check if multiplication is possible
    if (n1 != m2) {
        printf("Matrix multiplication not possible!\n");
        return;
    }
    
    // Initialize result matrix to 0
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Perform multiplication
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int m1, n1, m2, n2;
    
    printf("Enter dimensions of first matrix (rows columns): ");
    scanf("%d %d", &m1, &n1);
    
    printf("Enter dimensions of second matrix (rows columns): ");
    scanf("%d %d", &m2, &n2);
    
    // Check if multiplication is possible
    if (n1 != m2) {
        printf("Error: Number of columns in first matrix must equal number of rows in second matrix.\n");
        return 1;
    }
    
    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n2];
    
    // Input matrices
    printf("\nFor first matrix:\n");
    inputMatrix(m1, n1, matrix1);
    
    printf("\nFor second matrix:\n");
    inputMatrix(m2, n2, matrix2);
    
    // Multiply matrices
    multiplyMatrices(m1, n1, matrix1, m2, n2, matrix2, result);
    
    // Display results
    printf("\nFirst ");
    displayMatrix(m1, n1, matrix1);
    
    printf("\nSecond ");
    displayMatrix(m2, n2, matrix2);
    
    printf("\nResultant ");
    displayMatrix(m1, n2, result);
    
    getch();
}