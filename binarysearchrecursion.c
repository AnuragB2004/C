#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
    {
        return 0;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, low, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, high, key);
    }
}
int main()
{
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array in ascending order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int index = binarySearch(arr, 0, n - 1, key);
    if (index == -1)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Key found at index %d\n", index);
    }
    return 0;
}
