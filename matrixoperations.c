#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int result[MAX_SIZE][MAX_SIZE], int matrices[MAX_SIZE][MAX_SIZE][MAX_SIZE], int count, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < count; k++)
            {
                result[i][j] += matrices[k][i][j];
            }
        }
    }
}

void subtractMatrices(int result[MAX_SIZE][MAX_SIZE], int matrices[MAX_SIZE][MAX_SIZE][MAX_SIZE], int count, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrices[0][i][j];
            for (int k = 1; k < count; k++)
            {
                result[i][j] -= matrices[k][i][j];
            }
        }
    }
}

void multiplyMatrices(int result[MAX_SIZE][MAX_SIZE], int matrices[MAX_SIZE][MAX_SIZE][MAX_SIZE], int count, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrices[0][i][j];
            for (int k = 1; k < count; k++)
            {
                result[i][j] *= matrices[k][i][j];
            }
        }
    }
}

int main()
{
    int count, rows, cols;

    printf("Enter the number of matrices: ");
    scanf("%d", &count);

    if (count <= 0 || count > MAX_SIZE)
    {
        printf("Invalid number of matrices.\n");
        return 0;
    }

    printf("Enter the dimensions of the matrices (rows and columns): ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE)
    {
        printf("Invalid matrix dimensions.\n");
        return 0;
    }

    int matrices[MAX_SIZE][MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < count; i++)
    {
        printf("Enter the elements of matrix %d:\n", i + 1);
        inputMatrix(matrices[i], rows, cols);
    }

    int choice;
    printf("Enter the operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addMatrices(result, matrices, count, rows, cols);
        printf("Result of matrix addition:\n");
        displayMatrix(result, rows, cols);
        break;
    case 2:
        subtractMatrices(result, matrices, count, rows, cols);
        printf("Result of matrix subtraction:\n");
        displayMatrix(result, rows, cols);
        break;
    case 3:
        multiplyMatrices(result, matrices, count, rows, cols);
        printf("Result of matrix multiplication:\n");
        displayMatrix(result, rows, cols);
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }

    return 0;
}