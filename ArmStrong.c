#include <stdio.h>
 
void main()
{
    int temp, digit1, digit2, digit3,n;
    
    printf("Enter a Number\n");
    
    scanf("%d",&n);
    
    if(n<=9)
    {
        printf("ArmStrong Number");
    }
    else
    {
        digit1 = n % 10;  
        digit2 = (n % 100 - digit1) / 10;   
        digit3 = (n % 1000 - digit2) /100; 
        temp = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3); 
        if (temp == n)
        {
            printf("ArmStrong Number");

        }
        else{
            printf("Not ArmStrong Number");
        }
    }
    
}