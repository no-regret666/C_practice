#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct strbuf {
  int len;     //当前缓冲区（字符串）长度
  int alloc;   //当前缓冲区（字符串）容量
  char *buf;   //缓冲区（字符串）
};
void strbuf_init(struct strbuf *sb, size_t alloc){
    sb->len = 0;
    sb->alloc = alloc;
    sb->buf = (char *)malloc(alloc * sizeof(char));
}
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc){
    sb->len = len;
    sb->alloc = alloc;
    sb->buf = (char *)str;
}
void strbuf_release(struct strbuf *sb){
    free(sb->buf);
}
void strbuf_swap(struct strbuf *a, struct strbuf *b){
    struct strbuf temp = *a;
    *b = temp;
    *a = *b;
}
char *strbuf_detach(struct strbuf *sb, size_t *sz){
    sb->alloc = *sz;
    return sb->buf;
}
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second){
    if(first->alloc > second->alloc)
    return 1;
    else if(first->alloc < second->alloc)
    return -1;
    else
    return 0;
}
void strbuf_reset(struct strbuf *sb){
    sb->len = 0;
    memset(sb->buf,'\0',sizeof(sb->buf));
}
