#include <stdio.h>
#include <math.h>

int main(void) {
  int width,height,perimeter,area;

  width=3;
  height=5;

  perimeter= (width * 2)+(height * 2);
  area= (width*height);

  printf("The perimeter is: %d\n", perimeter);
  printf("The area is: %d\n", area);
  printf("If the values of width and height are 6.8 and 2.3 respectively, we must to change the values in the lines 7 and 8, then change the \"int\" of the 5th line for \"float\", and at last, change the \"%%d\" for a \"%%f\" in the lines 13 and 14\n");
  return 0;
}
