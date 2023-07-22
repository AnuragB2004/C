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
    
    printf("Two Dimensional array elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}