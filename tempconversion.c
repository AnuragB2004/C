#include<stdio.h>
int main(){
    float celcius, farhenheit;
    printf("Enter temperature in celcius: \n");
    scanf("%f", &celcius);

    farhenheit = (celcius * 9/5) + 32;

    printf("Converted temperature is: %f", farhenheit);
    return 0;
}