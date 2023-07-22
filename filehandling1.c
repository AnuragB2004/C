// Wap in C to take input from a file and print the contents of the file.
#include <stdio.h>
int main()
{
    FILE *fs;
    char name[100], city[100], str[50];
    int age;

    fs = fopen("inputFile.txt", "r");

    if (fs == NULL)
    {
        puts("Cannot open File");
        return 0;
    }

    fscanf(fs, "%s %s %s", name, str, city);
    printf("%-10s %-10s %-7s\n", name, str, city);

    while (fscanf(fs, "%s %d %s ", name, &age, city) == 3)
        printf("%-10s %-10d %-7s\n", name, age, city);

    fclose(fs);

    return 0;
}
