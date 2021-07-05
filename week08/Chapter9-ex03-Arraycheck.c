#include <stdio.h>

int count(int num, int *array, int length);

int main()
{
	int array[10] = {5, 9, 9, 4, 2, 5, 9, 3, 6, 7}; //all numbers
	int num = 9; //number to check

	printf("The number %d appears %d times.\n", num, count(num, array, 10));

	return 0;
}

int count(int number, int *array, int length)
{
	if (length == 0)
		return 0;

	return (*array == number) + count(number, array+1, length-1); //how many times it appeears
}
