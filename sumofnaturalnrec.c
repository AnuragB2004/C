#include <stdio.h>

int sum(int n);

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    int result = sum(x);
    printf("Sum of the first %d positive integers is: %d\n", x, result);
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNminus1 = sum(n - 1);
    int sumN = sumNminus1 + n;
    return sumN;
}
