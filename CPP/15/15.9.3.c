#include<stdio.h>
int counton(int x);
int main(){
    int x;
    scanf("%d",&x);
    printf("数字%d的二进制打开位的数量为%d\n",x,counton(x));
    return 0;
}
int counton(int x){
    int cnt = 0;
    for(int i = 0;i < 8 * sizeof(int);i++){
        if(x & (x >> i))
        cnt++;
    }
    return cnt;
}