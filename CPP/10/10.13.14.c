#include<stdio.h>
#define ROWS 3
#define COLS 5
void store(int rows,int cols,double arr[rows][cols]){
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
}
double ave_row(int n,double arr[n]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }
    return sum/n;
}
double ave(int rows,int cols,double arr[rows][cols]){
    int sum=0;
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
    }
    return sum/(rows*cols);
}
double max_arr(int rows,int cols,double arr[rows][cols]){
    int max=arr[0][0];
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            max=max>arr[i][j]?max:arr[i][j];
        }
    }
    return max;
}
int main(){
    double arr[ROWS][COLS];
    store(ROWS,COLS,arr);
    for(int i=0;i<ROWS;i++){
        printf("ave_row%d:%.2f\n",i+1,ave_row(COLS,arr[i]));
    }
    printf("ave:%.2f\n",ave(ROWS,COLS,arr));
    printf("max:%.2f",max_arr(ROWS,COLS,arr));
    return 0;
}