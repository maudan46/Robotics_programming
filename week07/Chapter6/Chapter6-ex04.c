#include <stdio.h>

int main(void) {
  float money;
  int value, qua, dim, nic, pen;
  char line[100];
  printf("Write the amount of money in dollars (less than $1.00)\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%f", &money);

  value= money*100;

  qua= (value/25);
  dim= (value%25)/10;
  nic= ((value%25)%10)/5;
  pen=(((value%25)%10)%5)/1;


  printf("To get %f dollars you need %d quarters, %d dimes, %d nickles and %d pennies\n", money, qua, dim, nic, pen);
  return 0;
}
