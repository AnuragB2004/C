#include <stdio.h>
int main()
{
    int a[10];
    int i, n;
    int search, found;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("Enter elements in an array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        }
    printf("Enter the element to search: \n");
    scanf("%d", &search);
    for(i=0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Element found");
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}