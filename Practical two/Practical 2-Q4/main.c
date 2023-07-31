#include <stdio.h>
int main ()
{
    float tempF,tempC;
    printf("Enter the temperature in degrees Fahrenheit");
    scanf("%f",&tempF);
    tempC=(5.0/9.0)*(tempF-32.0);
    printf("The entered temperature: %.3f Celsius",tempC);

}
