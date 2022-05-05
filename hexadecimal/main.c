#include <stdio.h>
#include <string.h>
#include "hexa.h"

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
    char name[20];
    scanf("%[^\n]",name);
    int sum=0;
    //char s='a';
    //printf("%d",(int)s);
    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
        sum=sum+((int)name[i]);
    }
    printf("decimal number %d\n",sum);
    hexa(sum);
    

    return 0;
}
