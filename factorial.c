#include<stdio.h>
int factorial(int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
void main(){
    int n,fact;
    printf("Enter the fctorial");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial is %d",fact);
}
