#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    FILE *a;
    if ((a = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "I coulde's open the file \"%s\"\n", argv[1]);
        exit(1);
    }
    char ch;
    while((ch = getc(a)) != EOF)
        putc(toupper(ch),a);
    if (fclose(a) != 0)
        fprintf(stderr, " Error in closing files \n");
    return 0;
}