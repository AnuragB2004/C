#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fs;
    fs = fopen("outputFile.txt", "w");

    char str[50];
    printf("Enter a String: ");
    scanf("%[^\n]%*c", str);
    fprintf(fs, "Original String: %s\n", str);
    int len = 0, i = 0;

    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    fprintf(fs, "Length = %d\n", len);
    fprintf(fs, "Modified string; ");
    for (int i = 0; i < len; i++)
    {
        if (str[i] != '\0')
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
                fprintf(fs, "%c", str[i]);
            }

            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
                fprintf(fs, "%c", str[i]);
            }
        }
    }
    return 0;
}