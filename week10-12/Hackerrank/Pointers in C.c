#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function
    *a=*a+*b;
    *b=abs(*a-((*b)*2));
}
int main() {
  char line[20];
    int a, b;
    int *pa = &a, *pb = &b;

    printf("Write 2 numbers separated by an space\n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &a, &b);
  
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
