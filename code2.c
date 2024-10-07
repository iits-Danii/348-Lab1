#include <stdio.h>

// function initializations//
void retry();
void categorize_temp(float temp);
float celsius_to_fahrenheit(float temp);
float fahrenheit_to_celsius(float temp);
float celsius_to_kelvin(float temp);
float kelvin_to_celsius(float temp);
float fahrenheit_to_kelvin(float temp);
float kelvin_to_fahrenheit(float temp);

//main function
int main() {

    //variable initializations//
    int entered_scale;
    float temp;
    int target;
    int restart;
    float  cat_temp;

    //asks the users required values for program to function
    printf("What scale would you like to enter temperature in? (1-Fahrenheit, 2-Celsius, 3-Kelvin): \n");
    scanf("%d", &entered_scale);
    printf("What is the temperature?: \n");
    scanf("%f", &temp);
    printf("What unit of measurement would you like to convert to? (1-Fahrenheit, 2-Celsius, 3-Kelvin): \n");
    scanf("%d", &target);
    
    //error checking//
    if ((entered_scale == 3 && temp < 0) || (entered_scale == target) || (entered_scale < 1 || entered_scale > 3) || (target < 1 || target > 3)) {

        printf("Invalid input, would you like to try again? (1-Y, 0-N) \n");
        scanf("%d", &restart);
        
        //'retry' restarts main//
        if (restart == 1) {
            retry();
        } else {
                return 0;
        }
        
    } else {

        //gets celsius conversion to categorize temp//
        if (entered_scale == 1) {
            cat_temp = fahrenheit_to_celsius(temp);
            categorize_temp(cat_temp);
        } else if (entered_scale == 3) {
            cat_temp = kelvin_to_celsius(temp);
            categorize_temp(cat_temp);
        }

        float converted_temp;
        
        //acquires converted value based on scale and target//
        if (entered_scale == 1 && target == 2) {
            converted_temp = fahrenheit_to_celsius(temp);
        } else if (entered_scale == 1 && target == 3) {
            converted_temp = fahrenheit_to_kelvin(temp);
        } else if (entered_scale == 2 && target == 1) {
            converted_temp = celsius_to_fahrenheit(temp);
        } else if (entered_scale == 2 && target == 3) {
            converted_temp = celsius_to_kelvin(temp);
        } else if (entered_scale == 3 && target == 1) {
            converted_temp = kelvin_to_fahrenheit(temp);
        } else if (entered_scale == 3 && target == 2) {
            converted_temp = kelvin_to_celsius(temp);
        }

        printf("Converted temperature: %.2f\n", converted_temp);
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

void categorize_temp(float cat_temp) {
    if (cat_temp <= 0.0) {
        printf("Temperature is freezing, wear winter clothing.\n");
    } else if (cat_temp <= 10.0) {
        printf("Temperature is cold, wear a jacket.\n");
    } else if (cat_temp <= 25.0) {
        printf("Temperature is comfortable, dress medium to light.\n");
    } else if (cat_temp <= 35.0) {
        printf("Temperature is hot, dress light.\n");
    } else {
        printf("Extreme heat, dress light, stay hydrated and stick to shade.\n");
    }
}
