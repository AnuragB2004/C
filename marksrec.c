#include <stdio.h>

float calPercentage(int science, int math, int sanskrit);

int main()
{
    int science, math, sanskrit;

    printf("Enter marks in science: ");
    scanf("%d", &science);

    printf("Enter marks in math: ");
    scanf("%d", &math);

    printf("Enter marks in sanskrit: ");
    scanf("%d", &sanskrit);

    float percentage = calPercentage(science, math, sanskrit);
    printf("Percentage is: %.2f%%\n", percentage);

    return 0;
}

float calPercentage(int science, int math, int sanskrit)
{
    float totalMarks = science + math + sanskrit;
    float percentage = (totalMarks / 300) * 100;
    return percentage;
}
