#include<stdio.h>
#include<stdlib.h>
#define BUFSIZE 1024 
#define SLEN 81
void append(FILE *source, FILE *dest);
int main(int argc, char *argv[])
{
    FILE *fa, *fs; 
    int files = 0;
    int cnt;
    if (argc < 3)
    {
        printf("Usage: %s appendfile sourcefile[s] \n", argv[0]);
        exit(-1);
    }
    if ((fa = fopen(argv[1], "a")) == NULL)
    { 
        fprintf(stderr, "Can't open %s \n", argv[1]);
        exit(-1);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    { 
        fputs("Can't create output buffer \n", stderr);
        exit(-1);
    }
    for (cnt = 2; cnt < argc; cnt++)
    {                                                        
        if (strcmp(argv[cnt], argv[1]) == 0)                
            fputs("Can't append file to itself \n", stderr); 
        else if ((fs = fopen(argv[cnt], "r")) == NULL)     
            fprintf(stderr, "Can't open %s \n", argv[cnt]);
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            { 
                fputs("can't create output buffer \n", stderr);
                continue;
            }
            append(fs, fa);      
            if (ferror(fs) != 0) 
                fprintf(stderr, "Error in reading file %s \n", argv[cnt]);
            if (ferror(fa) != 0) 
                fprintf(stderr, "Error in reading file %s \n", argv[1]);
            fclose(fs);
            files++;
            printf("File %s appended \n", argv[cnt]);
        }
    }
    printf("Done, %d files appended \n", files);
    fclose(fa);
    return 0;
}
void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];
    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}