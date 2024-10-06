#include <stdio.h>

int main() {
    int entered_scale;
    float temp;
    int target;

    printf("What scale would you like to enter temperature in? (1-Fahrenheit, 2-Celsius, 3-Kelvin): ");
    scanf("%d", &entered_scale);
    printf("What is the temperature?: ");
    scanf("%f", &temp);
    printf("What unit of measurement would you like to convert to? (1-Fahrenheit, 2-Celsius, 3-Kelvin): ");
    scanf("%d", &target);
}

float celsius_to_fahrenheit(float temp) {
    return (9.0/5.0)*temp + 32.0;
}

float fahrenheit_to_celsius(float temp) {
    return (5.0/9.0)*(temp-32.0);
}

float celsius_to_kelvin(float temp) {
    return temp + 273.15;
}

float kelvin_to_celsius(float temp) {
    return temp - 273.15;
}