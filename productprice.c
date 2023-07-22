#include <stdio.h>

void calculateprice(double value);

int main()
{
    double n;
    printf("Enter value: ");
    scanf("%lf", &n);
    calculateprice(n);
    return 0;
}

void calculateprice(double value)
{
    value = value + (0.18 * value);
    printf("The final price is: %.2lf", value);
}
