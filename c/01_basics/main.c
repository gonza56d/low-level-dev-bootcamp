#include <stdio.h>

// Function declaration
int celsius_to_fahrenheit(int celsius);
int fahrenheit_to_celsius(int fahrenheit);
void print_multiplication_table(int number);

int main() {
    int temp_c;
    int temp_f;
    int read;

    while (1) {
        printf("\n *** Running program *** \n");
        printf("Enter temperature in Celsius:");
        read = scanf("%d", &temp_c);
        if (read != 1) {
            printf("Error reading value for celsius.");
            return 1;
        }
        if (temp_c == 0) {
            printf("\n *** Exiting program. *** \n");
            break;
        }
        printf("Temperature: %d°C = %dF°\n", temp_c, celsius_to_fahrenheit(temp_c));

        printf("Enter temperature in Farenheit:");
        read = scanf("%d", &temp_f);
        if (temp_f == 0) {
            printf("\n *** Exiting program. *** \n");
            break;
        }
        if (read != 1) {
            printf("Error reading value for fahrenheit.");
            return 1;
        }
        printf("Temperature %d°F = %dC°\n", temp_f, fahrenheit_to_celsius(temp_f));

        printf("\nMultiplication Table for 5:\n");
        print_multiplication_table(5);
    }

    return 0;
}

int celsius_to_fahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

int fahrenheit_to_celsius(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

void print_multiplication_table(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
