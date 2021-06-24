#include <stdio.h>

int main(void) {
  int number, grade;
  int digit;
  char sign [2], line[100] ;
  
  printf("Write the number of points.\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%d", &number);

  digit= number%10;

  if (digit> 0 && digit<4) {
   sign[1]= '-';
  }
    if (digit> 3 && digit<8) {
   sign[1]= ' ';
  }
    if (digit> 7 && digit<10) {
   sign[1]= '+';
  }
  if (digit == 0) {
   sign[1]= '+';

  }

  if (number<61) {
    printf("The grade is F %c\n",sign[1]);
  }
   if (number<71 && number>60) {
    printf("The grade is D %c\n",sign[1]);
  }
    if (number<81 && number>70) {
    printf("The grade is C %c\n",sign[1]);
  }
    if (number<91 && number>80) {
    printf("The grade is B %c\n",sign[1]);
  }
    if (number<101 && number>90) {
    printf("The grade is A %c\n",sign[1]);
  }
  return 0;
}
