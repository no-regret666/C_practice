#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    FILE *in,*out;
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I coulde's open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((out = fopen(argv[1], "a")) == NULL)
    {
        fprintf(stderr, "I coulde's open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    int ch;
    while((ch = getc(in)) != EOF)     
        putc(toupper(ch),out);
    if (fclose(in) != 0)
        fprintf(stderr, " Error in closing files \n");
    if (fclose(out) != 0)
        fprintf(stderr, " Error in closing files \n");
    return 0;
}