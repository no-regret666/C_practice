#include<stdio.h>
void Fibonacci(int n){
    unsigned long x=1,y=1,t;
    for(int i=0;i<n;i++){
        printf("%lu ",x);
        t=x+y;
        x=y;
        y=t;       
    }
}
int main(){
    int x;
    scanf("%d",&x);
    Fibonacci(x);
    return 0;
}