#include<stdio.h>
#define tax1 0.15
#define tax2 0.2
#define tax3 0.25
void result(int x,double m){
    double sum,tax;
    if(x<=40){
        sum=x*m;
    }
    else{
        sum=(x+(x-40)*1.5)*m;
    }
    if(sum<=300){
        tax=tax1*sum;
    }
    else if(300<sum&&sum<=450){
        tax=tax1*300+tax2*(sum-300);
    }
    else{
        tax=tax1*300+tax2*150+tax3*(sum-450);
    }
    printf("%.2f %.2f %.2f\n",sum,tax,sum-tax);
} 
int main(){
    int time,choice;
    double m,tax,sum;
    scanf("%d",&choice);
    while(choice!=5){
        switch(choice){
            case 1:
            m=8.75;
            scanf("%d",&time);
            result(time,m);
            break;
            case 2:
            m=9.33;
            scanf("%d",&time);
            result(time,m);
            break;
            case 3:
            m=10.00;
            scanf("%d",&time);
            result(time,m);
            break;
            case 4:
            m=11.20;
            scanf("%d",&time);
            result(time,m);
            break;
            default:
            printf("Please reenter a number:");
        } 
        scanf("%d",&choice);       
    }
    return 0;
}