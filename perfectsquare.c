#include<stdio.h>
#include<math.h>
void main(){
    int n,i,j=0,sq;
    float new;

    printf("Enter a number: \n");
    scanf("%d",&n);
    new=sqrt((double)n);
    sq=new;
    if(sq==new){
        printf("Perfect Square ");

    }
    else{
        printf("Not Perfect Square");
    }

    
}