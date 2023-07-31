#include <stdio.h>
int main ()
{
    int num,i,counter=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    for (i=1;i<=num;i++){
            if(num%i==0)
              counter++;
            }
    }
    if(counter==2){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    return 0;
}
