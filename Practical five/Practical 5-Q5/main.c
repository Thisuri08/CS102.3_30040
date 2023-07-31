 #include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;


    printf("Enter an integer: ");
    scanf("%d", &num);


    do {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    } while (num != 0);


    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
