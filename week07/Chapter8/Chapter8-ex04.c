#include <stdio.h>

int main(void) {
  int n, m=0, res, lim;
  printf("Of what number you want to get the multiplication table?\n");
  scanf("%d", &n);
  printf("Until what number you want to multiplicate the previous number?\n");
  scanf("%d",&lim);

  while (m<lim+1) {
    res=n*m;
    printf("%d x %d = %d\n",n,m,res);
    m++;
  }
  return 0;
}
