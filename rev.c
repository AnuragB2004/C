#include <stdio.h>
voidf2(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
voidf1(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a = 4;
    int b = 5;
    int c = 6;
    f1(a, b);
    f2(&b, &c);
    printf(c - a - b);
    return 0;
}