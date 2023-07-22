#include<stdio.h>

int main(){
    float pi = 3.14;
    float radius;
    float Circumference;

    printf("Enter radius: ");
    scanf("%1f", &radius);
    
    Circumference = 2 * pi * radius;
    
    printf("Circumference is: %1f", Circumference);
    return 0;
}