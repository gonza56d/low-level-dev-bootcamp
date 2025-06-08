#include <stdio.h>
#include <assert.h>

int count_char(const char* string, char c);

int main() {
    int count = count_char("metal mania", 'a');
    assert(count == 3);
    return 0;
}

int count_char(const char* string, char c) {
    int count = 0;
    for (int i = 0; *(string + i) != '\0'; i++) {
        if (*(string + i) == c) {  // string[i] == c is more c-styled.
            count++;
        }
    }
    return count;
}
