#include <stdio.h>
#include <string.h>

char *change(char *string);

int main()
{
	char string[] = "Hola-Mundo";

	printf("%s\n", change(string));

	return 0;
}

char *change(char *string)
{
	int count;

	for (count = 0; count < strlen(string); ++count) {
		if (string[count] == '-')
			string[count] = '_';
	}

	return string;
}
