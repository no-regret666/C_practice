#include<stdio.h>
int main(){
    char s;
    printf("Please input a capital letter:");
    scanf("%c",&s);
    int n = s-'A'+1; 
    for(int i=1;i<=n;i++){
        char m = 'A';
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=n-i+1;j<=n;j++){
            printf("%c",m);
            m++;
        }
        m--;
        for(int j=n+1;j<=n+i-1;j++){
            m--;
            printf("%c",m);
        }
        printf("\n");
    }
    return 0;
}