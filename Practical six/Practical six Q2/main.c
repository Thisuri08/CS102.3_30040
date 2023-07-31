#include <stdio.h>

int main() {
    int size;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], scalarSum = 0;
    int vectorSum[size];

    // Input values for the first array
    printf("Enter values for the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Input values for the second array
    printf("Enter values for the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Calculate scalar sum
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }

    // Calculate vector sum
    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }

    // Display scalar sum
    printf("Scalar Sum: %d\n", scalarSum);

    // Display vector sum
    printf("Vector Sum:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    return 0;
}
