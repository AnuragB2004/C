#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the term number in Fibonacci series: ");
    scanf("%d", &n);

    printf("The %dth term of the Fibonacci series is: %d\n", n, fib(n));

    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n; // Base case: fib(0) = 0, fib(1) = 1
    }
    int fibN = fib(n - 1) + fib(n - 2);
    return fibN;
}
