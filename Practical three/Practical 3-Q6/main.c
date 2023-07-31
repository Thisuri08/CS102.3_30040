#include <stdio.h>

int main() {
    printf("The integer equivalents of some characters are:\n");
    printf("Uppercase letters: A=%d B=%d C=%d\n", 'A', 'B', 'C');
    printf("Lowercase letters: a=%d b=%d c=%d\n", 'a', 'b', 'c');
    printf("Digits: 0=%d 1=%d 2=%d\n", '0', '1', '2');
    printf("Special symbols: $=%d *=%d +=%d /=%d blank=%d\n", '$', '*', '+', '/', ' ');
    return 0;
}
