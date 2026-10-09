#include<stdio.h>
int main(){
    int n,i;
    long long factorial=1;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial is not defined for negative number.");
    }
    else{
        for(i=1;i<=n;i++){factorial=factorial*i;
      }
        printf("factorial of %d =%d",n,factorial);
    }
    return 0;
}
