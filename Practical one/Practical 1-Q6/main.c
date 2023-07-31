#include <stdio.h>
int main()
{
    int byear,age;
    char name[20];

    printf("Enter your name");
    scanf("%s",&name);
    printf("Enter your birth year");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Your name:%s\nYour age:%d",name,age);
}
