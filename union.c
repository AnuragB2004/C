#include <stdio.h>

union studentInfo
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    union studentInfo student[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", student[i].name);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &student[i].rollNo);

        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &student[i].marks);
    }

    printf("\nStudent Information:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", student[i].name, student[i].rollNo, student[i].marks);
    }

    return 0;
}
