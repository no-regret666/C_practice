#include<stdio.h>
#include<string.h>
#define len 10
void mystrncpy(char *s1,char *s2,int n){
    int i = 0,j = 0;
    int len2 = strlen(s2);
    if(n <= len2){
        while(j < n)
        s1[i++] = s2[j++];
    }
    else{
        while(j < n){
            s1[i++] = s2[j++];
        }
        s1[i] = '\0';
    }
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
    char s1[len],s2[len];
    s_gets(s2,len);
    mystrncpy(s1,s2,5);
    puts(s1);
    return 0;
}