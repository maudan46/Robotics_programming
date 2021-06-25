#include <stdio.h>

int main(){

  int num,i,m=0,flag=0;
  char line[100];
  
  printf("Enter a number: \n");
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%d",&num );

  m=num/2;
  for(i=2;i<=m;i++)
    {
    if(num%i==0)
    {
      printf("The number %d is not prime\n",num);
      flag=1;
      break;
    }    
  }    
  if(flag==0)
  printf("The number %d is prime\n",num);
  return 0;
}    
