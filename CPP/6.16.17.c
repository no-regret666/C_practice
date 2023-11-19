#include<stdio.h>
int main(){
    int n=100,year=0;
    while(n>0){
        n*=1.08;
        n-=10;
        year++;
    }
    printf("%d years later\n",year);
    return 0;
}