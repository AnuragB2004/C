#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i;
    int *array;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the number of elements to add: ");
    scanf("%d", &m);

    array = (int *)realloc(array, (n + m) * sizeof(int));

    printf("Enter %d more elements:\n", m);
    for (i = n; i < n + m; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The elements are:\n");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
