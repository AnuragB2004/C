#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter string 1: \n");
    scanf("%s", str1);
    printf("Enter string 2: \n");
    scanf("%s", str2);

    while (str1[i] == str2[i] && str1[i] != '\0')
        i++;
    if (str1[i] > str2[i])
        printf("str1 > str2");
    else if (str1[i] < str2[i])
        printf("str1 < str2");
    else
        printf("str1 = str2");

    return 0;
}