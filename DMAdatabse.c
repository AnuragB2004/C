#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll_no;
    int total_marks;
};
int main()
{
    int n, i, max_marks = 0;
    struct Student *students, *current_student;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    students = malloc(n * sizeof(struct Student));
    for (i = 0; i < n; i++)
    {
        current_student = students + i;
        printf("\nEnter the information of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", current_student->name);
        printf("Roll number: ");
        scanf("%d", &current_student->roll_no);
        printf("Total marks: ");
        scanf("%d", &current_student->total_marks);
        if (current_student->total_marks > max_marks)
        {
            max_marks = current_student->total_marks;
        }
    }
    printf("\n\nStudent marks:\n");
    for (i = 0; i < n; i++)
    {
        current_student = students + i;
        printf("%s\t%d\t%d\n", current_student->name, current_student->roll_no, current_student->total_marks);
    }
    printf("\nMarks of the topper:\n");
    for (i = 0; i < n; i++)
    {
        current_student = students + i;
        if (current_student->total_marks == max_marks)
        {
            printf("%s\t%d\t%d\n", current_student->name, current_student->roll_no, current_student->total_marks);
        }
    }
    return 0;
}
