#include<stdio.h>
#include<string.h>
#define len 10
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
char *string_in(char *str1,char *str2){
    int s1 = strlen(str1);
    int s2 = strlen(str2);
    int i = 0,j = 0,f = 0;
    while(i < s1 && j < s2){
        if(str1[i] == str2[j]){
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j = 0;
        }
    }
    if(j == s2)
    return str1 + i -j;
    else
    return NULL;
}
int main(){
    char str1[len],str2[len];
    s_gets(str1,len);
    s_gets(str2,len);
    printf("%p is found\n",string_in(str1,str2));
    // char *c = string_in(str1,str2);
    //printf("%c\n",*c);
    return 0;
}