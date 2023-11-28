#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *in, *out;
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I coulde's open the file \"%s\"\n", argv[1]);
        exit(1);
    }
    if ((out = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file \n");
        exit(2);
    }
    int ch;
    while ((ch = getc(in)) != EOF)
        putc(ch, out);
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, " Error in closing files \n");
    return 0;
}