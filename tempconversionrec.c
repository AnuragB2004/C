#include <stdio.h>

void convertTemp(float celcius);
void convertTempReverse(float fahrenheit);

int main()
{
    int choice;
    float temperature;

    printf("Choose the temperature scale to convert:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertTemp(temperature);
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertTempReverse(temperature);
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}

void convertTemp(float celcius)
{
    float fahrenheit = (celcius * 1.8) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}

void convertTempReverse(float fahrenheit)
{
    float celcius = (fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius: %.2f\n", celcius);
}