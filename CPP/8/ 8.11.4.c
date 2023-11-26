#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(){
    int n=0,sum=0,cnt=0;
    int ch;
    bool inword=false;
    while((ch=getchar())!=EOF){
        if(!isspace(ch)&&!ispunct(ch))
        sum++;
        if(!isspace(ch)&&!ispunct(ch)&&!inword){
            cnt++;
            inword=true;
        } 
        if(isspace(ch)||ispunct(ch)&&inword)
        inword=false;
    }
    printf("%d %d\n",sum,cnt);
    printf("the average is %d",sum/cnt);
    return 0;
}