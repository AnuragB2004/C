#include <Stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is %d", s);
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}