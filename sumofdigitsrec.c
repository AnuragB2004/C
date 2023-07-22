#include <stdio.h>
int sumofdigits(int num);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = sumofdigits(number);
    printf("Sum of digits: %d\n", result);
    return 0;
}
int sumofdigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + sumofdigits(num / 10);
    }
}
