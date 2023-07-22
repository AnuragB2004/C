//WAP to calculate the perimeter of a rectangle
#include<stdio.h>
int main(){
    int side_a, side_b;
    printf("Enter the two sides: \n");
    scanf("%d%d", &side_a, &side_b);

    int perimeter = side_a + side_b;
    printf("Perimeter of rectangle is: %d", perimeter);
    return 0;
}