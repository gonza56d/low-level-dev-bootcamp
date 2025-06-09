#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* string_copy(const char* original);

int main() {
    const char* name = "metalhead";
    char* clone = string_copy(name);
    assert(strcmp(name, clone) == 0);
    free(clone);  // ¡No olvides liberar!
    printf("%lu", sizeof(char));
    return 0;
}

char* string_copy(const char* original) {
    int length = strlen(original);
    char* copy = malloc((length + 1) * sizeof(char));
    if (copy == NULL) {
        return NULL;
    }
    for (int i = 0; i < length + 1; i++) {
        copy[i] = original[i];
    }
    return copy;
}
