#include<stdio.h>
int main(){
    double a[8],b[8];
    for(int i=0;i<8;i++){
        scanf("%lf",&a[i]);
        if(i==1)
        b[i]=a[1];
        else{
            b[i]=a[i]+b[i-1];
        }
    }
    for(int i=0;i<8;i++){
        printf("%-3f ",a[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%-3f ",b[i]);
    }
    return 0;
}