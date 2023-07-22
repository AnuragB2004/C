#include <stdio.h>
int main()
{
    int n, i, j, k, y = 0, z;
    printf("enter the number of elements");
    scanf("%d", &n);
    int a[n];
    printf("enter the array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the new array is \n");
    for (j = 0; j < n; j++)
    {
        for (k = j + 1; k < n; k++)
        {
            if (a[k] == a[j])

            {
                for (y = k; y < n - 1; y++)
                {
                    a[y] = a[y + 1];
                }
                n--;
                k--;
            }
        }
    }

    for (int z = 0; z < n; z++)
    {
        printf("%d \n", a[z]);
    }
    return 0;
}