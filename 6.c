#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[100][100];
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=i;j<=2*n-i;j++){
            for(k=i;k<=2*n-i;k++){
                s[j][k]='A'+i-1;
            }
        }
    }    
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}