#include <stdio.h>

int find_and_count_a(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'A') {
            count++;
        }
    }
    return count;
}

int main() {
    char s[] = "A string tem a letra 'a'.";
    int count = find_and_count_a(s);
    printf("A string tem %d letras 'a'.\n", count);
    return 0;
}