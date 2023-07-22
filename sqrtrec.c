#include <stdio.h>
#include <math.h>

void squareroot(int num);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    squareroot(number);
    return 0;
}

void squareroot(int num)
{
    int result = sqrt(num);
    printf("Square root of the given number is: %d\n", result);
}
