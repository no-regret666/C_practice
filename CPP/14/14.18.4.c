#include<stdio.h>
#define LEN 20
struct names{
    char first[LEN];
    char middle[LEN];
    char last[LEN];
};
struct data{
    int nums;
    struct names fellow;
};
char *s_gets(char *str,int n);
void showdata(struct data *pst);
int main(){
    struct data person[5];
    int cnt = 0;
    while (cnt < 5 ){
        printf ("请输入你的姓 :");
        s_gets(person[cnt].fellow.last,LEN);
        printf ("请输入你的名 :");
        s_gets(person[cnt].fellow.first,LEN);
        printf ("请输入你的中间名, 无直接按回车 :");
        s_gets(person[cnt].fellow.middle,LEN);
        printf ("请输入你的社会保障号 :");
        scanf ("%d", &person[cnt].nums);
        getchar();
        cnt++;
    }
    for(int i = 0;i < 5;i++){
        showdata(&person[i]);
    }
    return 0;
}
void showdata(struct data *pst){
        if(pst -> fellow . middle[0] != '\0')
        printf("%s,%s %c. -- %d\n",pst->fellow.first,pst->fellow.last,pst->fellow.middle[0],pst->nums);
        else
            printf("%s,%s -- %d\n",pst->fellow.first,pst->fellow.last,pst->nums);
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
    }
    return result;
}
