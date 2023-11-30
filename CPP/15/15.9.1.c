#include<stdio.h>
#include<string.h>
int convert(char *str);
int main(){
    char * pbin = "01001001";
    printf("%s 转换为十进制为 %d\n",pbin,convert(pbin));
    return 0;
}
int convert(char *str){
    int len = strlen(str);
    int s = 1,result = 0; 
    for(int i = len - 1;i >= 0;i--){
        result += (str[i] - '0') * s;
        s *= 2;
    }
    return result;
}