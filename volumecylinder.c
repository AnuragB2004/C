#include<stdio.h>
int main(){
    float radius, height;
    float pi = 3.14;
    printf("Enter Radius: \n");
    scanf("%f", &radius);
    printf("Enter Height: \n");
    scanf("%f", &height);

    float volume = pi * radius * radius * height;
    printf("Volume of cylinder is: %f", volume);
    return 0;
}