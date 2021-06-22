#include <stdio.h>

int main(void) {
  int year;
  printf("Write the year\n");
  scanf("%d",&year);

  if (year%4==0) {
    if (year%100==0) {
      if (year%400==0) {
        printf("The year %d is a leap year.\n", year);
      }
      else {
        printf("The year %d is not a leap year.\n", year);
      }
    }
    else {
      printf("The year %d is not a leap year.\n", year);
    }
  }
  else {
    printf("The year %d is not a leap year.\n", year);
  }
  return 0;
}