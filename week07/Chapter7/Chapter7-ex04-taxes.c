#include <stdio.h>

//Ask for  the amount of money/sales
//Scan the money
//Operation to get the 8% of the slaes and add it to the total amount
//print the result

int main(void) {
  float sales, tax;
  char line[100];
  
  printf("Write the amount of sales\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%f",&sales );


  tax=((sales*8)/100)+sales;
  
  printf("The amount of money with tax incluided is %f.\n",tax);


  return 0;
}
