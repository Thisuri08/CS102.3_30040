#include <stdio.h>
int main() {
    char c,z;
    printf("Enter An English upper case letter: ");
    scanf("%c", &z);
    if (z < 65 || z > 90) return 0;
    for (c = 65; c <= z; c++) printf("The ASCII value of %c = %d\n", c, c);
    return 0;
}
