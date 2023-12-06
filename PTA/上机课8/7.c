#include<stdio.h>
#include<string.h>
int main(){
    char s[20][10];
    int i = 0;
    int len[20];
    scanf("%s",s[i]);
    while(strcmp(s[i],"#")!=0){
        len[i] = strlen(s[i]);
        i++;
        scanf("%s",s[i]);
    }
    i--;
    for(int j = 0;j < i - 1;j++){
        for(int k = 0;k < i - 1 - j;k++){
            if(len[k] > len[k+1]){
                char temp[10];
                strcpy(temp,s[k]);
                strcpy(s[k],s[k+1]);
                strcpy(s[k+1],temp);
            }
        }
    }
    for(int j = 0;j <= i;j++){
        printf("%s ",s[j]);
    }
    return 0;
}