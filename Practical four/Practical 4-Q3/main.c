#include <stdio.h>
int main() {
    float rad, ans, pi = 3.14;
    int choice;
    printf("circumference=1,area=2,volume=3\n");
    printf("Enter the choice:");
    scanf(" %d", &choice);
    printf("Enter the radius:");
    scanf("%f" ,&rad);
    switch (choice) {
        case 1:
            printf("The circumference of the circle: %.2f", ans = 2 * pi * rad);
            break;
        case 2:
            printf("The area of the circle: %.2f", ans = pi * rad * rad);
            break;
        case 3:
            printf("The volume of the sphere: %.2f", ans = 4.0 / 3.0 * pi * rad * rad * rad);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
