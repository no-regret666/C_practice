#include<stdio.h>
#define stop '#'
int main(){
    char c;
    int cnt=0;
    while((c=getchar())!=stop){
        switch(c){
            case '.':printf("!");
                     cnt++;
                     break;
            case '!':printf("!!");
                     cnt++;
                     break;
            default:putchar(c);   
        }
    }
    printf("\n%d times\n",cnt);
    return 0;
}