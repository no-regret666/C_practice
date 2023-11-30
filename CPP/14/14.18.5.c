#include<stdio.h>
#define LEN 10
#define CSIZE 4
int all = 0;
typedef struct name{
    char xing[LEN];
    char ming[LEN];
}Name;
typedef struct student{
    Name person;
    float grade[3];
    float ave;
}Student;
void insertgrade(Student arr[],int n);
void countave(Student arr[],int n);
void show(Student arr[],int n);
int main(){
    Student some[CSIZE]={
        {"Zhang","San"},
        {"Li","Si"},
        {"Xiao","Ming"},
        {"Li","Hua"}
    };
    insertgrade(some,CSIZE);
    countave(some,CSIZE);
    show(some,CSIZE);
    printf("班级平均分为%.2f",all*1.0/9);
    return 0;
}
void insertgrade(Student arr[],int n){
    for(int i = 0;i < n;i++){
        printf("请输入学生 %s %s 的三项成绩：\n",arr[i].person.xing,arr[i].person.ming);
        scanf("%f%f%f",&arr[i].grade[0],&arr[i].grade[1],&arr[i].grade[2]);
    }
}
void countave(Student arr[],int n){
    for(int i = 0;i < n;i++){
        int sum = 0;
        sum += arr[i].grade[0]+arr[i].grade[1]+arr[i].grade[2];
        arr[i].ave = sum/3;
        all += sum;
    }
}
void show(Student arr[],int n){
    for(int i = 0;i < n;i++){
        printf("学生 %s %s 的成绩为 %.2f,%.2f,%.2f，平均分为 %.2f\n",arr[i].person.xing,arr[i].person.ming,arr[i].grade[0],arr[i].grade[1],arr[i].grade[2],arr[i].ave);
    }
}

