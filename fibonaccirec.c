#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n; // Base case: fib(0) = 0, fib(1) = 1
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
