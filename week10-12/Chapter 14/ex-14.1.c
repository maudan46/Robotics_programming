#include <stdio.h>

const char *filename = "main.c";

int main() {

	FILE *file;
	char line[100]; 
  int count = 0;

	file = fopen(filename, "r");
	if (file == NULL) {
		fprintf(stderr, "Problem opening file %s\n", filename);
		return(8);
	}

	while (fgets(line, sizeof(line), file)) {
		++count;
	}

	printf("The file 'main.c' have %d lines\n", count);

	return(0);
}
