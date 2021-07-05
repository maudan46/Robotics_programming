#include <stdio.h>

int higher(int *array, int length);

int main()
{
	int nums[4] = {5, 2, 7, 1}; //array of numbers
	
	printf("Higher number:  %d\n", higher(nums, 4));

	return 0;
}

int higher(int *array, int length)
{
	int higher= 0;
	int count;

	for (count = 0; count < length; ++count) {
		if (array[count] > higher)
			higher = array[count];
	}

	return higher;
}
