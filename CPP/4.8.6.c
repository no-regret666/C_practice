#include<stdio.h>
#include<string.h>
int main(){
    char ming[100],xing[100];
    printf("Please input your frist name:");
    scanf("%s",ming);
    printf("Please input your last name:");
    scanf("%s",xing);
    int a,b;
    a=strlen(ming);
    b=strlen(xing);
    printf("%s %s\n%*d %*d\n",ming,xing,a,a,b,b);
    printf("%s %s\n%-*d %-*d\n",ming,xing,a,a,b,b);
    return 0;
}