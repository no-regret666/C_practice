#include<stdio.h>
int main(){
    int n=5,week=1;
    while(n<=150){
        n-=week;
        n*=2;
        printf("week%d: %d ",week,n);
        week++;
    }
    return 0;                                                                                                                               
}