#include<stdio.h>
int main(){
    char ch;
    double a,b;
    printf("Enter the operation of your choice:\n");
    printf("a.add s.subtract m.multiply d.divide q.quit\n");
    while((ch=getchar())!='q'){
        switch(ch){
            case 'a':
            scanf("%lf%lf",&a,&b);
            printf("%.2f+%.2f=%.2f\n",a,b,a+b);
            break;
            case 's':
            scanf("%lf%lf",&a,&b);
            printf("%.2f-%.2f=%.2f\n",a,b,a-b);
            break;
            case 'm':
            scanf("%lf%lf",&a,&b);
            printf("%.2f*%.2f=%.2f\n",a,b,a*b);
            break;
            case 'd':
            printf("Enter first number:");
            scanf("%lf",&a);
            printf("Enter second number:");
            scanf("%lf",&b);
            while(b==0){
                printf("Enter a number other than 0:");
                scanf("%lf",&b);
            }
            printf("%.2f*1.0/%.2f=%.2f\n",a,b,a/b);
            break;
            case '\n':
            break;
            default:
            printf("Please reenter:");
        }
    }
    printf("Bye!\n");
    return 0;
}