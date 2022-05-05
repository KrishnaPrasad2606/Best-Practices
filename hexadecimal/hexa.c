#include <stdio.h>
#include <string.h>
void hexa(int num)
{
     int remainder,quotient;
     int temp,i=1,j;
     char hexadecimalNumber[100];
    quotient=num;
        while(quotient!=0) 
        {
		temp = quotient % 16;
		if( temp < 10)
		{
		           temp =temp + 48; 
		}
		 else
		 {
		         temp = temp + 55;
		 }
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("hexadecimal value %d: ",num);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexadecimalNumber[j]);
}