#include <stdio.h>

//Current issues: organization (spacing things out)
//reminders: { before else statements, variables must be declared in advance, keep referring to datatype stuff

void restart();

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

void retry() {
    main();
}
