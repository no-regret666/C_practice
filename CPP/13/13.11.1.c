#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int ch;  
    FILE *fp; 
    long count = 0;
    char name[20];
    scanf("%s",name);
    if ((fp = fopen(name,"r")) == NULL)
    {
        printf("Can't open %s \n", name);
        exit(-1);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("\nFile %s has %ld characters \n", name , count);
    return 0;
}