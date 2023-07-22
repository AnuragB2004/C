#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    int count = 0;
    char a[100];
    printf("Enter a string: ");
    scanf("%s", &a);
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;
}