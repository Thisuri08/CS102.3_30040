#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter your first number");
    scanf("%d",&a);
    printf("Enter your second number");
    scanf("%d",&b);
    printf("before swapping: a=%d b= %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: a= %d b= %d",a,b);

}
