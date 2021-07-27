#include <stdio.h>

#define MAX 10

int main()
{
	int Element[MAX] = {8,3,2,6,12,7,4,5,1,};
	int *POINTER;

	for (POINTER = &Element[0]; POINTER < &Element[MAX]; ++POINTER) {
		*POINTER = 0;
	}

	int counter;

	for (counter = 0; counter < MAX; ++counter) {
		printf("Element[%d] = %d\n", counter, Element[counter]);
	}

	return 0;
}
