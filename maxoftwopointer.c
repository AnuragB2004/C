#include <stdio.h>
int findMax(int *ptr1, int *ptr2);
int main()
{
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    int max = findMax(&num1, &num2);
    printf("max of %d and %d is %d", num1, num2, max);
    return 0;
}
int findMax(int *ptr1, int *ptr2)
{
    if (*ptr1 > *ptr2)
    {
        return *ptr1;
    }
    else
    {
        return *ptr2;
    }
}