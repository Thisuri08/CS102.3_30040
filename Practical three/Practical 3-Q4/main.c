#include <stdio.h>
int main ()
{
    float rad,dia,cir,ar,pi=3.14159;

    printf("Enter the radius of the circle");
    scanf(" %f",&rad);

    printf("\nThe diameter of the circle:%.2f",dia=rad*2.0);
    printf("\nThe circumference of the circle:%.2f",cir=2*pi*rad);
    printf("\nThe area of the circle:%.2f",ar=pi*rad*rad);

    return 0;

}
