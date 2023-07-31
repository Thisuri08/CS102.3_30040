#include <stdio.h>
int main ()
{
    int no1,no2,no3,max,min;

    printf("Enter your first number");
    scanf(" %d",&no1);
    printf("Enter your second number");
    scanf(" %d",&no2);
    printf("Enter your third number");
    scanf(" %d",&no3);

        max=no1;
    if(no2>no1)
        max=no2;
    else
        max=no3;

        min=no1;
    if(no2<no1)
        min=no2;
    else
        min=no3;

    printf("The highest number:%d\nThe smallest number:%d",max,min);
}
