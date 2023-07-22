#include<stdio.h>
int main(){
    int length, breadth, area, perimeter;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area < perimeter)
    {
        printf("Perimeter is greater");
    }
    if (area > perimeter)
    {
        printf("Area is greater");
    }
    
    return 0;
}