#include <stdio.h>
void Table();
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    Table(n);
    return 0;
}
void Table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}