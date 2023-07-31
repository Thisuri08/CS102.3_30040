#include <stdio.h>
int main() {
  int marks[10], i, total = 0;
  float average;

  for (i = 0; i < 10; i++) {
    printf("Enter mark %d: ", i + 1);
    scanf(" %d ", &marks[i]);
    total += marks[i];
  }

  average = total / 10.0;

  printf("The total is %d\n", total);
  printf("The average is %.2f\n", average);

  if (average < 50) {
    printf("Fail!");
  } else {
    printf("Pass!");
  }
  return 0;
}
