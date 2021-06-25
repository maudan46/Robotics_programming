#include <stdio.h>
#include <string.h>

int main(void) {
  char letter[3], line[100] ;
  printf("Write a letter\n");
  fgets(line, sizeof(line), stdin);
	sscanf(line, "%s", letter);

  if (strcmp (letter, "a")==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter, "e" )==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter,"i")==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter,"o")==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter,"u" )==0){
    printf("It's a vowel.\n");
  }
  if (strcmp (letter, "A")==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter, "E" )==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter,"I")==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter,"O")==0){
    printf("It's a vowel.\n");
  }
  else if (strcmp (letter,"U" )==0){
    printf("It's a vowel.\n");
  }
  else {
    printf("It's a consonant\n");
  }
  return 0;
}
