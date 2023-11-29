#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
char *s_gets(char *str,int n);
int main(){
    FILE *in, *out; 
    int ch;
    char name_in[LEN];
    char name_out[LEN];
    int count = 0;
    printf("请输入原始文件名：\n");
    s_gets(name_in,LEN);
    if ((in = fopen(name_in, "r")) == NULL)
    {
        fprintf(stderr, "I coulde's open the file \"%s\"\n", name_in);
        exit(-1);
    }
    strcpy(name_out,name_in); 
    strcat(name_out, ".red");
    if ((out = fopen(name_out, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file \n");
        exit(-1);
    }
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, " Error in closing files \n");
    return 0;
}
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