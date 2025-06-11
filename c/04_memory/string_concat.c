#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* string_concat(const char* a, const char* b);

int main() {
    const char* left = "metal";
    const char* right = "head";
    char* combined = string_concat(left, right);
    assert(strcmp(combined, "metalhead") == 0);
    free(combined);
}

char* string_concat(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int total_len = len_a + len_b + 1;
    char* copy = malloc(total_len * sizeof(char));
    if (copy == NULL) {
        return NULL;
    }
    for (int i = 0; i < len_a; i++) {
        copy[i] = a[i];
    }
    for (int i = 0; i < len_b; i++) {
        copy[i + len_a] = b[i];
    }
    copy[total_len - 1] = '\0';
    printf("%s", copy);
    return copy;
}
