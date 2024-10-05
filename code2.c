#include <stdio.h>

int main() {
    int entered_scale;
    int temp;
    int target;

    printf("What scale would you like to enter temperature in? (1-Fahrenheit, 2-Celsius, 3-Kelvin): ");
    scanf("%d", &entered_scale);
    printf("What is the temperature?: ");
    scanf("%d", &temp);
    printf("What unit of measurement would you like to convert to? (1-Fahrenheit, 2-Celsius, 3-Kelvin): ");
    scanf("%d", &target);
}