#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LEN 10
int atoi(char *str){
    int n = 0,len = strlen(str);
    for(int i = 0;i < len;i++){
        if(!isdigit(str[i]))
        return 0;
        n = n * 10 + (str[i] - '0');
    }
    return n;
}
char *s_gets(char *str,int n){
    int i = 0;
    char *result;
    result = fgets(str,n,stdin);
    if(result){
        while(str[i] != '\n' && str[i] !='\0')
        i++;
        if(str[i] == '\n')
        str[i] = '\0';
        else{
            while((getchar() != '\n'))
            continue;
        }
    }
    return result;
}
int main(){
    char str[LEN];
    if(s_gets(str,LEN)){
        printf("该字符串转为数字为 %d\n",atoi(str));
    }    
    return 0;
}