#include <stdio.h>

int main(void) {
  int n,rep=0,num=0,y=0;
  float dig[num] ,sum=0,average;
  printf("Of how many numbers you want to get the average?\n");
  scanf("%d",&n);

  while (rep<n) {
    rep++;
    printf("Write the %d number: \n",rep);
    scanf("%f",&dig[num]);
    num++;
  }

  while (y<n) {
    sum= sum + dig[y];
    y++;
  }

  average=sum/n;
  printf("The average of the numbers is %f.\n",average);
  return 0;
}
