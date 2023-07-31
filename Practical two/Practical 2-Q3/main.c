#include <stdio.h>
int main()
{
    int dis,time;
    float speed;
    printf("Enter the distance in meters");
    scanf("%d",&dis);
    printf("Enter the time in seconds");
    scanf("%d",&time);
    speed=(float)dis/time;
    printf("The average speed:%.2f m/s",speed);
}
