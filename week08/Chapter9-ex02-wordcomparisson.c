#include <stdio.h>
#include <string.h>

int begins(char *string1, char *string2);

int main()
{
	char first[1000];
	char second[1000]; 


	printf("Write the phrase:\n");
	fgets(first, sizeof(first), stdin);
	first[strlen(first)-1] = '\0';
	

	printf("Write the second phrase:\n");
	fgets(second, sizeof(second), stdin);
	second[strlen(second)-1] = '\0';

	if (begins(first, second)!= 0)
		printf("The first phrase doesn't starts with the second phrase\n");
	else
		printf("The first phrase starts with the second phrase\n");

	return 0;
}

int begins(char *string1, char *string2)
{
	int counter;

	for (counter = 0; counter < strlen(string2); ++counter) {
		if (string1[counter]!= string2[counter])
			return 1;
	}

	return 0;
}
