#include <stdio.h>
int main ()
{
    char emp_name[20];
    int bsalary,nsalary,inc;
    printf("Enter the employee name");
    scanf("%s",&emp_name);
    printf("Enter your basic salary");
    scanf("%d",&bsalary);

    if(bsalary<5000)
      inc=bsalary*0.05;
    else if(bsalary>=10000)
      inc=bsalary*0.15;
    else
       inc=bsalary*0.1;

    nsalary=bsalary+inc;

    printf("\n%s's new salary : %d",emp_name,nsalary);

}
