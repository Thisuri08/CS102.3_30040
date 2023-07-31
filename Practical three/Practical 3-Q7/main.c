#include <stdio.h>
int main ()
{
    float bsalary,add,bonus,remu;
    int stime,range;
    char city;

    printf("Salesmen service time:");
    scanf("%d",&stime);
    printf("\nsalesmen working city-colombo use 'c':");
    scanf(" %c",&city);
    printf("\nSalesmen basic salary per a month:");
    scanf("%f",&bsalary);
    printf("\nmonthly sales range:");
    scanf("%d",&range);

    if (stime>5)
        add=bsalary*0.1;
    if(city=='c')
        add=+2500;

    if(range<25000)
        bonus=bsalary*0.1;
    else if(range>=50000)
        bonus=bsalary*0.15;
    else
        bonus=bsalary*0.12;

        remu=bsalary+add+bonus;

        printf("\nThe salesmen monthly remuneration:%.2f",remu);

        return 0;

}




