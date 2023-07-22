// WAP in C to find the average of an array using malloc
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;
    float avg, sum = 0.0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
