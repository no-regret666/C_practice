#include<stdio.h>
void Temperatures(double x){
    const float y = 5.0/9.0*(x-32.0);
    const float z = y +273.16;
    printf("%.2f %.2f\n",y,z);
}
int main(){
    double x;
    while(scanf("%lf",&x)==1){//scanf返回值，详见书P115
    printf("%.2f ",x);
    Temperatures(x);
    }
    return 0;
}