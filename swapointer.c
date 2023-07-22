#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    _swap(&x, &y);
    printf("a = %d & b = %d\n", x, y);
    return 0;
}
// void swap(int a, int b)
// {
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d\n", a, b);
// }
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}