#include <stdio.h>

int main(void) {
  float serie [5];
  int num, positive=0, negative=0;
  printf("write a serie of 5 numbers, try to vary between positive and negative numbers\n");
  fscanf(stdin, "%f %f %f %f %f", &serie[0], &serie[1], &serie[2], &serie[3], &serie[4] );
  for (num=0; num<5; num++) {
    if (serie[num]>0) {
      positive++;
    }
    else if (serie[num]<0) {
      negative++;
    }
  }
  printf("The number of positive values is %d and the number of negative numbers is %d.\n", positive, negative);
  return 0;
}
