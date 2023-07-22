#include <stdio.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char *ptr = alphabet;

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}
