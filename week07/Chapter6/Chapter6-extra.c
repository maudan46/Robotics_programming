#include <stdio.h>

int main(void) {
  int lim,x=0,y=0;
  printf("Write a limit number\n");
  scanf("%d",&lim);

  while (y<lim) {
    y++;
    if (y%2==0) {
      printf("%d\n",y);
    }
    else {
      printf("Impar\n");
    }
  }
  return 0;
}
