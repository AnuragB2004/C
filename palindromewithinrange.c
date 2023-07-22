#include <stdio.h>
int main()
{
    int a, b, c, start, end, reversed = 0;

    printf("Enter the lower limit: ");
    scanf("%d", &start);

    printf("Enter the upper limit: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are: ", start, end);
    c = a;
    for (a = start; a <= end; a++)
    {
        while (c != 0)
        {
            b = c % 10;
            reversed = reversed * 10 + b;
            c = c / 10;
        }
    }
    return 0;
}