#include<stdio.h>
#define f(x,y) (2.0*(x)*(y))/((x)+(y))
int main(){
    double x,y;
    scanf("%lf%lf",&x,&y);
    printf("%.2f和%.2f的调和平均数为%.2f",x,y,f(x,y));
    return 0;
}