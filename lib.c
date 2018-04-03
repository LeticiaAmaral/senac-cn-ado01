#include <stdio.h>
#include <string.h>
#include "lib.h"


void conversao(char num[20],int N,int M)
{
    int count=0,r,digit,i,n=0,b=1;
    
    //For para mudar o numero com base acima de 11 para letra
    for(i=strlen(num)-1;i>=0;i--)
        {
         if(num[i]>='A'&&num[i]<='Z')
            {
             digit=num[i]-'0'-7;
            }
         else
            {
             digit=num[i]-'0';
            }
        n=digit*b+n;
        b=b*N;
        }
   
    //Mudança de base
    while(n!=0)
    {
        r=n%M;
        digit='0'+r;
        if(digit>'9')
        {
            digit+=7;
        }
         num[count]=digit;
         count++;
         n=n/M;
    }
for(i=count-1;i>=0;i--)
    {
     printf("%c",num[i]);
    }
 printf("\n");

}