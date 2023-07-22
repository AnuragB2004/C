#include<stdio.h>
#include<ctype.h>
int main(){
    char unit;
    float temp;

    printf("Is the temperature in (C) or (F)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter temperature in celcius: \n");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("The temperature in Farhenheit is: %f", temp);
    }
    else if(unit == 'F'){
        printf("Enter temperature in farhenheit: \n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5)/9;
        printf("The temperature in Celcius is: %f", temp);
    }
    else{
        printf("Not correct temperature unit!");
    }
    return 0;
}