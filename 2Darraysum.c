#include <stdio.h>
int main()
{

    int a[2][3];

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
