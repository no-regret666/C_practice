#include<stdio.h>
#include<ctype.h>
int main(int argc,char *argv[]){
    int ch;
    if(argc == 2){
        if(argv[1][0] == '-'){
            while((ch = getchar()) != EOF){
                switch(argv[1][1]){
                    case 'p':
                    putchar(ch);
                    break;
                    case 'u':
                    putchar(toupper(ch));
                    break;
                    case 'l':
                    putchar(tolower(ch));
                    break;
                    default:
                    putchar(ch);
                }         
            }
        }
    }
    return 0;
}