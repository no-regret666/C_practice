#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 20
int main() {
    int n;
    printf("How many words?\n");
    scanf("%d", &n);
    char **str = (char **)malloc(n * sizeof(char *));
    printf("Enter %d words now:\n",n);
    for (int i = 0; i < n; i++) {
        str[i] = (char *)malloc(LEN * sizeof(char));
        scanf("%s",str[i]);
    }
    printf("Here are your words:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n",str[i]);
    }
    for (int i = 0; i < n; i++) {
        free(str[i]);
    }
    free(str);
    return 0;
}
