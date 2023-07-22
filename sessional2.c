// WAP to reverse a number using recursion
#include <stdio.h>
static int sum = 0, rem;

int revNumFunc(int num)
{
    if (num)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        revNumFunc(num / 10);
    }
    else
        return sum;
}

int main()
{
    int num, revNum;
    printf("Enter a number to be reversed: ");
    scanf("%d", &num);
    revNum = revNumFunc(num);
    printf("The number after reversing is :%d", revNum);
    return 0;
}