#include <stdio.h>
int main ()
{
    int no1,no2;

    printf("Enter your first number");
    scanf("%d",&no1);
    printf("Enter your second number");
    scanf("%d",&no2);

    if(no1%no2==0)
        printf("The %d is multiple of the %d",no1,no2);
    else
        printf("The %d is not a multiple of the %d",no1,no2);
}
