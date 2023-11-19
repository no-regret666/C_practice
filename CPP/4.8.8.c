#include<stdio.h>
#define m 3.785
#define n 1.609
int main(){
    float s,v;
    scanf("%f%f",&s,&v);
    printf("%.1f\n",s/v);
    float result=100*m*v/n*s;
    printf("%.1f\n",result);
    return 0; 
}