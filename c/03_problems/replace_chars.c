#include <stdio.h>
#include <assert.h>
#include <string.h>

void replace_char(char* string, char find, char replace);

int main() {
    char text[] = "banana";
    replace_char(text, 'a', 'o');
    assert(strcmp(text, "bonono") == 0);
    return 0;
}

void replace_char(char* string, char find, char replace) {
    for (int i = 0; *(string + i) != '\0'; i++) {
        if (string[i] == find) {
            string[i] = replace;
        }
    }
}
