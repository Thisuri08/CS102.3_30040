#include <stdio.h>
int main()
{
    int num1;
    char ch;
    float num2;
    double num3;

     printf("Enter your number");
     scanf("%d",&num1);
     printf("Enter your character");
     scanf(" %c",&ch);
     printf("Enter your number");
     scanf("%f",&num2);
     printf("Enter your number");
     scanf("%lf",&num3);
     printf("\n\nYour number is %d\n",num1);
     printf("Your character is %c\n",ch);
     printf("Your number is %f\n",num2);
     printf("Your number is %.2lf\n",num3);

}
