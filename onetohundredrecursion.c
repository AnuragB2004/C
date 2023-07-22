#include <stdio.h>
int natural(int i)
{
    if (i <= 100)
    {
        printf("%d ", i);
        natural(++i);
    }
}
void main()
{
    natural(1);
}