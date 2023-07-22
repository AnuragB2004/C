#include <stdio.h>
void arrayreverse(int arr[], int size);

int main()
{
    int size;

    // printf("Enter the size of the array: ");
    // scanf("%d", &size);
    int arr[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    arrayreverse(arr, size);

    return 0;
}
void arrayreverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
