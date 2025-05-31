#include <stdio.h>

// Function declaration
int celsius_to_fahrenheit(int celsius);
void print_multiplication_table(int number);

int main() {
    int temp_c = 25;
    printf("Temperature: %d°C = %dF°\n", temp_c, celsius_to_fahrenheit(temp_c));

    printf("\nMultiplication Table for 5:\n");
    print_multiplication_table(5);

    return 0;
}

int celsius_to_fahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

void print_multiplication_table(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
