#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void celsius_to_fahrenheit_ptr(int* celsius, int* fahrenheit);
int string_length(const char* str);
void swap(int* a, int* b);
void reverse_string(char* string);
void reverse_string_steroids(char* string);
void to_upper_case(char* string);
char custom_to_uppercase(char c);
int char_index(const char* string, char c);

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

    char to_upper[] = "uppercaseme";
    to_upper_case(to_upper);
    assert(strcmp(to_upper, "UPPERCASEME") == 0);

    char hello[] = "hello";
    int char_at_a = char_index(hello, 'h');
    int char_at_b = char_index(hello, 'o');
    int char_at_c = char_index(hello, 'l');
    int char_at_d = char_index(hello, 'z');
    assert(char_at_a == 0);
    assert(char_at_b == 4);
    assert(char_at_c == 2);
    assert(char_at_d == -1);
    
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

void to_upper_case(char* string) {
    // for (; (*string = toupper(*string)); string++);
    for (; (*string = custom_to_uppercase(*string)); string++);
}

char custom_to_uppercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int char_index(const char* string, char c) {
    for (int i = 0; *(string + i) != '\0'; i++) {
        if (string[i] == c) {
            return i;
        }
    }
    return -1;
}
