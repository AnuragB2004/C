#include <stdio.h>
struct Student{
    char name[50];
    int roll_number;
    float marks;
};
int main(){
    struct Student s[5];
    int highest_marks_index = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("Marks: ");
        scanf("%f", &s[i].marks);

        if (s[i].marks > s[highest_marks_index].marks){
            highest_marks_index = i;}    }

    printf("\nDetails of all students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll_number);
        printf("Marks: %.2f\n", s[i].marks);
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[highest_marks_index].name);
    printf("Roll number: %d\n", s[highest_marks_index].roll_number);
    printf("Marks: %.2f\n", s[highest_marks_index].marks);

    return 0;
}
