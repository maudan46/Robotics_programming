#include <stdio.h>

int main(void) {

  int n,count=0,num=0,div=0;
  float resistance,temp=0,res[num];


  printf("Of how many parallel resistors you want to calculate the total resistance?\n");
  scanf("%d", &n);
  while (count< n) {

    count++;
    printf("The %d resistance: \n",count);
    scanf("%f",&res[num]);
    num++;
  }

  temp= temp + (1/res[div]);
  div++;

  while (div<n) {

    temp= temp + (1/res[div]);
    div++;

  }

  resistance= 1/temp;

  printf("%f\n", resistance);


  return 0;
}
