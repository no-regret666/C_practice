#include<stdio.h>
int main(int argc,char *argv[]){
    FILE *source;
    int cnt,word;
    for(cnt = 1;cnt < argc;cnt++){
        if ((source = fopen(argv[cnt], "r")) == NULL){
        fprintf(stderr, "I coulde's open the file \"%s\"\n", argv[cnt]);
        continue;
        }
        while((word = getc(source)) != EOF){
            putchar(word);
        }
        printf("\n");
        if (fclose(source) != 0)
        fprintf(stderr, " Error in closing files \n");
    }
    return 0;
}