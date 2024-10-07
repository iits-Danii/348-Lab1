#include <stdio.h>

//Current issues: organization (spacing things out)
//reminders: { before else statements, variables must be declared in advance, keep referring to datatype stuff

void retry();
float celsius_to_fahrenheit(float temp);
float fahrenheit_to_celsius(float temp);
float celsius_to_kelvin(float temp);
float kelvin_to_celsius(float temp);
float fahrenheit_to_kelvin(float temp);
float kelvin_to_fahrenheit(float temp);


int main() {
    int entered_scale;
    float temp;
    int target;
    int restart;

    printf("What scale would you like to enter temperature in? (1-Fahrenheit, 2-Celsius, 3-Kelvin): ");
    scanf("%d", &entered_scale);
    printf("What is the temperature?: ");
    scanf("%f", &temp);
    printf("What unit of measurement would you like to convert to? (1-Fahrenheit, 2-Celsius, 3-Kelvin): ");
    scanf("%d", &target);
    
    if ((entered_scale == 3 && temp < 0 ) || (entered_scale == target )) {
       
        printf("Invalid input, would you like to try again? (1-Y, 0-N): ");
        scanf("%d", restart);
        
        if (restart == 1) {
            retry();
        } else {
                return 0;
        }
        
    } else {
        float converted_temp;
        if (entered_scale == 1 && target == 2) {
            converted_temp = fahrenheit_to_celsius(temp);
        } else if (entered_scale == 1 && target == 3) {
            converted_temp == fahrenheit_to_kelvin(temp);
        } else if (entered_scale == 2 && target == 1) {
            converted_temp == celsius_to_fahrenheit(temp);
        } else if (entered_scale == 2 && target == 3) {
            converted_temp = celsius_to_kelvin(temp);
        } else if (entered_scale == 3 && target == 1) {
            converted_temp == kelvin_to_fahrenheit(temp);
        } else if (entered_scale == 3 && target == 2) {
            converted_temp = kelvin_to_celsius(temp);
        }

        printf("Converted temperature: %.2f/n", converted_temp);
    }
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

float fahrenheit_to_kelvin(float temp) {
    return celsius_to_kelvin(fahrenheit_to_celsius(temp));
}

float kelvin_to_fahrenheit(float temp) {
    return celsius_to_fahrenheit(kelvin_to_celsius(temp));
}

void retry() {
    main();
}
