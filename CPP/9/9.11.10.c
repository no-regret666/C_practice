#include<stdio.h>
void to_base_n(int x,int b){
    int t=x%b;
    if(x>=b)
        to_base_n(x/b,b);
    printf("%d",t);
}
int main(){
    int x,b;
    scanf("%d%d",&x,&b);
    to_base_n(x,b);
    printf("\n");
    return 0;
}