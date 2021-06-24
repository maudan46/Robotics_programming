#include <stdio.h>

int main(void) {
  int year;
  char line[100];
  printf("Write the year\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%d", &year);

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
