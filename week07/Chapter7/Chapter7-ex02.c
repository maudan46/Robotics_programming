#include <stdio.h>

//Ask for the first date
//read it with different variables
//do a sustraction of the variables 
//transform those new variables into days and make a sum
//print the result 
//encode

int main(void) {
  int dd1, dd2, dd3, mm1, mm2, mm3, yy1, yy2, yy3, total;

  printf("Write the minor date in this format( dd-mm-yy, e.i 23 05 76)\n");
  fscanf(stdin, "%d %d %d", &dd1, &mm1, &yy1);

  printf("Write the bigger date in this format( dd-mm-yy, e.i 23 05 76)\n");
  fscanf(stdin, "%d %d %d", &dd2, &mm2, &yy2);
  
  yy3= yy2-yy1;
  yy3= yy3*365;

  mm3=mm2-mm1;
  mm3=mm3*30;

  dd3=dd2-dd1;

  total= yy3+mm3+dd3;

  printf("The days between %d/%d/%d and %d/%d/%d are aprox %d days\n", dd1,mm1,yy1,dd2,mm2,yy2,total);
  
  return 0;
}
