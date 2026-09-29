#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swap:\n");
    printf("First number is =%d\n",a);
    printf("Second number is =%d\n",b);
    return 0;
}
