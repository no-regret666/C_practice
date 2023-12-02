#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct strbuf {
  int len;     //当前缓冲区（字符串）长度
  int alloc;   //当前缓冲区（字符串）容量
  char *buf;   //缓冲区（字符串）
};

//初始化 sb 结构体，容量为 alloc。
void strbuf_init(struct strbuf *sb, size_t alloc){
    sb->len = 0;
    sb->alloc = alloc;
    sb->buf = (char *)malloc(alloc * sizeof(char));
    if(sb->buf == NULL){
       fprintf(stderr,"分配内存失败\n");
       exit(EXIT_FAILURE); 
    }
}

//将字符串填充到 sb 中，长度为 len, 容量为 alloc。
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc){
    sb->len = len;
    sb->alloc = alloc;
    sb->buf = (char *)str;
}

//释放 sb 结构体的内存。
void strbuf_release(struct strbuf *sb){
    free(sb->buf);
    sb->buf == NULL;
}

//交换两个 strbuf。
void strbuf_swap(struct strbuf *a, struct strbuf *b){
    struct strbuf temp = *a;
    *b = temp;
    *a = *b;
}

//将 sb 中的原始内存取出，并将 sz 设置为其 alloc 大小 。
char *strbuf_detach(struct strbuf *sb, size_t *sz){
    sb->alloc = *sz;
    char *temp = (char *)realloc(sb->buf,(*sz) * sizeof(char));
    if(temp != NULL)(
        sb->buf = temp;
    )
    return sb->buf;
}

//比较两个 strbuf 的内存是否相同。
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second){
    if(first->alloc == second->alloc)
    return 0;
    else 
    return 1;
}

//清空 sb。
void strbuf_reset(struct strbuf *sb){
    sb->len = 0;
    memset(sb->buf,'\0',sizeof(sb->buf));
}
