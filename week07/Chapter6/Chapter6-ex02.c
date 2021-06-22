#include <stdio.h>

int main(void) {
  float number, grade;
  printf("Write the number of points.\n");
  scanf("%f", &number);
  if (number<61) {
    printf("The grade is F\n");
  }
   if (number<71 && number>60) {
    printf("The grade is D\n");
  }
    if (number<81 && number>70) {
    printf("The grade is C\n");
  }
    if (number<91 && number>80) {
    printf("The grade is B\n");
  }
    if (number<100 && number>90) {
    printf("The grade is A\n");
  }
  return 0;
}
