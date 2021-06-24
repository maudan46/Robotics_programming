#include <stdio.h>

//ask for the size of the file in MB
//transform the size from MB to bytes
//multiplicate the size in bytes for the speed of the transmission (96 characters per second)
//Print the time

int main(void) {
  char line[100];
  float size, time, bytes;
  printf("Write the size of the file in MB\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%f",&size );
  
  bytes= size*1048576;
  time= bytes/960;

  printf("The time required to send the file is %f seconds\n",time);
  return 0;
}
