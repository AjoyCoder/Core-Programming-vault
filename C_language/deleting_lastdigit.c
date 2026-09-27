#include<stdio.h>
int main(){
  int num, last_dig, new_num;
  printf("Enter a number: ");
  scanf("%d", &num);
  last_dig=num%10;
  new_num=num/10;
  printf("Last Digit = %d\n", last_dig);
  printf("New Number = %d\n", new_num);
return 0;
}
