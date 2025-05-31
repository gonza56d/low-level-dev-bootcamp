#include <stdio.h>

// Function declaration
int celsius_to_fahrenheit(int celsius);
int farenheit_to_celsius(int farenheit);
void print_multiplication_table(int number);

int main() {
    int temp_c;
    int temp_f;

    printf("Enter temperature in Celsius:");
    scanf("%d", &temp_c);
    printf("Temperature: %d°C = %dF°\n", temp_c, celsius_to_fahrenheit(temp_c));

    printf("Enter temperature in Farenheit:");
    scanf("%d", &temp_f);
    printf("Temperature %d°F = %dC°\n", temp_f, farenheit_to_celsius(temp_f));

    printf("\nMultiplication Table for 5:\n");
    print_multiplication_table(5);

    return 0;
}

int celsius_to_fahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

int farenheit_to_celsius(int farenheit) {
    return (farenheit - 32) / 9 * 5;
}

void print_multiplication_table(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
