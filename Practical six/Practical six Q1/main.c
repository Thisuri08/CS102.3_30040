#include <stdio.h>

int main() {
    int arr[10];
    int i, sum = 0, min, max;

    // Input values to the array
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];

        // Set the first value as both minimum and maximum initially
        if (i == 0) {
            min = arr[i];
            max = arr[i];
        } else {
            // Find the minimum and maximum values
            if (arr[i] < min)
                min = arr[i];
            if (arr[i] > max)
                max = arr[i];
        }
    }

    // Calculate the average
    float average = (float)sum / 10;

    // Print the results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    // Print the array in reverse order
    printf("Array in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
