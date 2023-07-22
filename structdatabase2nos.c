#include <stdio.h>
struct Student
{
    char name[50];
    int roll_number;
    float marks;
};

int main()
{
    struct Student s1, s2;
    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll number: ");
    scanf("%d", &s1.roll_number);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll number: ");
    scanf("%d", &s2.roll_number);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    printf("\nDetails of first student:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll_number);
    printf("Marks: %.2f\n", s1.marks);

    printf("\nDetails of second student:\n");
    printf("Name: %s\n", s2.name);
    printf("Roll number: %d\n", s2.roll_number);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
