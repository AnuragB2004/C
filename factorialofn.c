#include <stdio.h>

int factorial(int n);

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    int result = factorial(x);
    printf("Factorial of %d is: %d\n", x, result);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNm1 = factorial(n - 1);
    int factN = factNm1 * n;
    return factN;
}