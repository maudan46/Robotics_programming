#include <stdio.h>

//design code 
//Ask for the units in KM
//Read the answer
//Operation to transform the KM units to ft
//Print the result
//endcode

int main(void) {
  float km, ft;
  char line[20];
  printf("Write the units you have in Km\n");
  scanf("%f",&km);

  ft= km * 3281;

  printf("The amount of %f km is equal to %f ft.\n", km, ft);
  return 0;
}
