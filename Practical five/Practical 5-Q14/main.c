#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    printf("The number of even numbers in the array is %d", count);
    return 0;
}
