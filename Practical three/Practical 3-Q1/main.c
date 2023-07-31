#include <stdio.h>
int main ()
{
    int no1,no2,max;
    printf("Enter your first number");
    scanf("%d",&no1);
    printf("Enter your second number");
    scanf("%d",&no2);
    if (no1>no2)
        max=no1;
    else
        max=no2;
    printf("The highest number:%d",max);
}
