#include<stdio.h>
int main(){
    int side;
    // int area = side * side;

    printf("Enter side: \n");
    scanf("%d", &side);
    int area = side * side;
    printf("Area of square is: %d", area);
    return 0;
}
