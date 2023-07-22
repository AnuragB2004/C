#include <stdio.h>
int main()
{
    int a[10];
    int i, n;
    int min, max;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    printf("Enter the numbers in array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("Minimum of array is: %d\n", min);
    printf("Maximum of array is: %d", max);
    return 0;
}