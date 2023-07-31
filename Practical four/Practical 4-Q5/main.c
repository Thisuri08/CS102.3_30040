#include <stdio.h>
int main ()
{
   int monthno;

   printf("Enter the month number:");
   scanf("%d",&monthno);

   switch(monthno)
   {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:printf("Total days=31 days");break;
      case 4:
      case 6:
      case 9:
      case 11:printf("Total days=30 days");break;
      case 2:printf("Total days=28 days");break;
      default:printf("ERROR! Month doesn't exist");
   }
}
