#include<stdio.h>
void main(){
  float a,b,sum,diff;
  printf("Enter the two floating number: ");
  scanf("%f%f",&a,&b);
  sum=a+b;
  diff=a-b;
  printf("Sum = %.2f\n", sum);
  printf("Difference = %.2f\n", diff);
}
