#include <stdio.h>

int fact(int number) {
	if (number == 0) {
		return(1);
	}

	return(number * fact(number - 1));
}

int main(void) {
  char line[20];
  int number;
  printf("Writhe the number you want to get the factorial\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &number);
	printf("fact(%d) is %d\n", number,  fact(number));
	return(0);
}
