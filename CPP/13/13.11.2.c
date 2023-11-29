#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *in, *out;
    if(argc != 3){
        fprintf(stderr,"命令错误");
        exit(-1);
    }
    if ((in = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "I coulde's open the file \"%s\"\n", argv[1]);
        exit(-1);
    }
    if ((out = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't create output file \n");
        exit(-1);
    }
    int ch;
    while ((ch = getc(in)) != EOF)
        putc(ch, out);
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, " Error in closing files \n");
    return 0;
}