#include <stdio.h>

int main() {
    int entered_scale;
    int temp;
    int target;

    printf("What scale would you like to enter temperature in? (Fahrenheit, Celsius, Kelvin): ");
    scanf("%s", &entered_scale);
    printf("What is the temperature?: ");
    scanf("%d" &temp);
    printf("What unit of measurement would you like to convert to?: ");
    scanf("%s", &target);
}