#include <stdio.h>

struct Student
{
    char name[50];
    int roll_number;
    float marks;
};

int main()
{
    struct Student s[100];

    for (int i = 0; i < 100; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDetails of all students:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll_number);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
