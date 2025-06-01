#include <stdio.h>
#include <assert.h>
#include <string.h>

void celsius_to_fahrenheit_ptr(int* celsius, int* fahrenheit);
int string_length(const char* str);
void swap(int* a, int* b);
void reverse_string(char* string);
void reverse_string_steroids(char* string);

int main() {
    int c = 30;
    int f = 0;
    
    celsius_to_fahrenheit_ptr(&c, &f);
    printf("%d°C = %d°F (using pointers)\n", c, f);
    assert(f == 86);

    const char* word = "Metal Rules";
    int len = string_length(word);
    assert(len == 11);
    printf("Length of \"%s\" is %d\n", word, len);

    int a = 2;
    int b = 6;
    swap(&a, &b);
    assert(a == 6 && b == 2);

    char to_reverse[] = "Hello";
    char to_reverse_b[] = "World";
    reverse_string(to_reverse);
    reverse_string_steroids(to_reverse_b);
    printf("\nto_reverse value: %s\n", to_reverse);
    printf("\nto_reverse_b value: %s\n", to_reverse_b);
    assert(strcmp(to_reverse, "olleH") == 0);
    assert(strcmp(to_reverse_b, "dlroW") == 0);

    return 0;
}

void celsius_to_fahrenheit_ptr(int* celsius, int* fahrenheit) {
    *fahrenheit = (*celsius * 9 / 5) + 32;
}

int string_length(const char* str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    return length;
}

void swap(int* a, int* b) {
    int copy_of_a = *a;
    *a = *b;
    *b = copy_of_a;
}

void reverse_string(char *string) {
    int max_index = string_length(string) - 1;
    int j = max_index;
    for (int i = 0; i <= max_index / 2; i++) {
        char left = string[i];
        char right = string[j];
        string[i] = right;
        string[j] = left;
        j--;
    }
}

void reverse_string_steroids(char *string) {
    for (int i = 0, j = string_length(string) - 1; i < j; i++, j--) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}
