#include <stdio.h>

int main(void) {
  int hours, overtime;
  float pay,total, overpay, total2;
  
  printf("How many hours have worked the employee?\n");
  scanf("%d", &hours);
  printf("How much you pay per hour in dollars?(just write the number)\n");
  scanf("%f",&pay);

  total = hours * pay;

  if (hours>40) {
    overtime= hours-40;
    overpay= overtime*1.5*pay;
    total= (hours-overtime) * pay + overpay;
    }

  printf("The weekly payment of the employee is %f dollars \n",total);
  

  return 0;
}
