#include <stdio.h>
 
int main(void)
{
    FILE *fp;
    char c;//Hello
 
    fp = fopen(__FILE__, "r");
 
    do
    {
        c=fgetc(fp);
        putchar(c);
    }
    while(c!=EOF);
 
    fclose(fp);
 
    return 0;
}