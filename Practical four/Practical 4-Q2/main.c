#include <stdio.h>
int main ()
{
 char operation;
 int num1,num2,ans;

 printf("Enter the operator '+ - / *':");
 scanf("%c",&operation);
 printf("Enter your first number:");
 scanf("%d",&num1);
 printf("Enter your second number:");
 scanf("%d",&num2);

 switch(operation)
     {
     case '+':printf("The answer is %d",ans=num1+num2);break;
     case '-':printf("The answer is %d",ans=num1-num2);break;
     case '/':printf("The answer is %d",ans=num1/num2);break;
     case '*':printf("The answer is %d",ans=num1*num2);break;
     default:printf("Invalid operation");
     }

}
