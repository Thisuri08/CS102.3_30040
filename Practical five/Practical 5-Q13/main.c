#include <stdio.h>

int main()
{
    int number;

    printf("Enter -1 to exit from the loop:\n");

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == -1)
        {
            break;
        }
    }
    return 0;
}
