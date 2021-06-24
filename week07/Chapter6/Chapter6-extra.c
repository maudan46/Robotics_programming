#include <stdio.h>

int main(void) {
  int lim,x=0,y=0;
  char line[100];
  printf("Write a limit number\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &lim);

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
