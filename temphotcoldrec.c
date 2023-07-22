#include <stdio.h>

float getTemperature();
int main() {
    float temperature;
    temperature = getTemperature();

    if (temperature >= 30) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    }

    return 0;
}
float getTemperature() {
    float temperature;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if (temperature < -100 || temperature > 100) {
        printf("Invalid temperature. Please enter a value between -100 and 100.\n");
        return getTemperature();
    }

    return temperature;
}
