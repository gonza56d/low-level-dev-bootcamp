#include <stdio.h>
#include <assert.h>
#include <string.h>

int is_palindrome(const char* string);

int main() {
    assert(is_palindrome("radar") == 1);
    assert(is_palindrome("hello") == 0);
    assert(is_palindrome("madam") == 1);
    return 0;
}

// fanatic optimized version
int is_palindrome(const char* string) {
    int len = strlen(string);
    for (int i = 0; i <= (len - 1) / 2; i++) {
        if (string[i] != string[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
// readable version
//int is_palindrome(const char* string) {
    //int left = 0;
    //int right = strlen(string) - 1;
    //while (left < right) {
        //if (string[left] != string[right]) {
            //return 0;
        //}
        //left++;
        //right--;
    //}
    //return 1;
//}
