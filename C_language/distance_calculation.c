#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,dist;
    printf("Enter four numbers:");
    scanf("%f,%f,%f,%f", &x1,&y1,&x2,&y2);
    dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance will be = %.2f",dist);
    return 0;
}
