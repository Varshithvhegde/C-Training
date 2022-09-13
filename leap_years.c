#include<stdio.h>
void main(){
    int N,i;
    printf("Enter the Range");
    scanf("%d",&N);
    for( i=1;i<=N;i++){
        if(i%400==0){
            printf("%d ",i);
        }
        else if(i%4==0&&i % 100 != 0){
            printf("%d ",i);
        }
    }
}