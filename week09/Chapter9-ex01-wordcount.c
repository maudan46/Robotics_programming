#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_words(char *string);

int main()
{
	char line[1000];

	printf("Write a phrase:\n");
	fgets(line, sizeof(line), stdin);
  line[strlen(line)-1] = '\0';

	printf("Total of words: %d \n", count_words(line));

	return 0;
}

int count_words(char *string)
{
	int word;  //Total amount of words
  int noword; //Blank spaces
	int counter;  //Used to count in the loops

	word =1; 
	noword = 0; 

	for (counter = 0; counter < strlen(string); ++counter) {
		if (isspace(string[counter])) {
			if (! isspace(string[counter - 1]))
				++word;
		}
		else
			noword = 1;
	}

	if (noword == 0)
		word = 0;
	
	return word;
}
