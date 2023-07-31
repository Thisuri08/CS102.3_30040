#include <stdio.h>

int main() {
   int num1 = 0, num2 = 1, nextNum, i;

   printf("The first 10 numbers of the Fibonacci Sequence are:\n");

   for (i = 0; i < 10; i++) {
      if (i <= 1)
         nextNum = i;
      else {
         nextNum = num1 + num2;
         num1 = num2;
         num2 = nextNum;
      }
      printf("%d ", nextNum);
   }

   return 0;
}
