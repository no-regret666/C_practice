#include<stdio.h>
int main(){
    int a,b;
    printf("the second operand:");
    scanf("%d",&b);
    printf("the first operand:");
    scanf("%d",&a);
    while(a>0){
        printf("%d %% %d is %d\n",a,b,a%b);
        printf("the first operand:");
        scanf("%d",&a);
    }
    return 0;
}