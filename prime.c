#include<stdio.h>
#include<math.h>
void main(){
    int n,i,j=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            j=1;
            break;
        }
    }
    if(j==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    
}