#include<stdio.h>
#include<math.h>
double power(double x,int t){
    double pow;
    if(x==0)
    return 0.0;
    if(t==0)
    return 1.0;
    if(t>0)
    return x * power(x,t-1);
    else
    return 1/(power(x,fabs(t)));
}
int main(){
    double x;
    int t;
    scanf("%lf%d",&x,&t);
    printf("%f\n",power(x,t));
    return 0;
}