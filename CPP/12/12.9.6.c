#include<stdio.h>
#include<stdlib.h>
int main(){
    int nums[1000];
    for(int i = 0;i < 1000;i++){
        nums[i] = rand() % 10 + 1;
    }
    int cnt[10]={0};
    for(int i = 0;i < 1000;i++){
        cnt[nums[i]-1]++;
    }
    for(int i = 0;i < 10;i++){
        printf("数字%d出现的次数为%d\n",i+1,cnt[i]);
    }
    return 0;
}