#include <stdio.h>
int natural(int i, int n)
{
    if (i <= n)
    {
        printf("%d ", i);
        natural(++i,n);
    }
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    natural(1,n);
}