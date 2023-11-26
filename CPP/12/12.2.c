#include<stdio.h>
int main(){
    for(int i = 2;i < 4;i++){
        int n = 6;
        printf("%d,%p\n",n,&n);
        n++;
    }
    printf("%d,%p\n",n,&n);
    return 0;
}