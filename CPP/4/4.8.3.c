#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    printf("a.The input is %.1f or %.1e\n",x,x);
    printf("b.The input is %+.3f or %+.3e\n",x,x);
    return 0;
}