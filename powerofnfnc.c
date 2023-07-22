#include <stdio.h>
#include <math.h>

void power(double n);

int main()
{
    double n;
    printf("Enter n: ");
    scanf("%lf", &n);
    power(n);
    return 0;
}

void power(double n)
{
    n = pow(n, 2);
    printf("%.2lf", n);
}
