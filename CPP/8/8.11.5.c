#include<stdio.h>
int main(){
    printf("Pick a number ranged from 1 to 100,then i will guess the number.\n");
    printf("If my guess is small,please respond with a 's'.\n");
    printf("Else if it is big,then respond with a 'b'.\n");
    printf("Else if it is right,respond with a 'y'.\n");
    int guess =50,left=0,right=100;
    char ch;
    printf("Is your number %d?\n",guess);
    while((ch=getchar())!='y'){
        if(ch=='s'){
            left=guess;
        }
        else if(ch=='b'){
            right=guess;
        }
        else if(ch=='\n')
        continue;
        guess=(left+right)/2;
        printf("Is your number %d?\n",guess);
    }
    printf("Now,I get it.\n");
    return 0;
}