#include <stdio.h>
#include <string.h>
#include "lib.h"

int main (){
    int N, M;
    char num[20];

    printf("n2m ");
    scanf("%s%d",num,&N);
    printf(" ");
    scanf("%d",&M);
    printf(" \n");
  	
    if(N<2 || N>36 || M<2 || M>36){
    	printf("Base fora de alcance\n");
        return -1;
    }

  	conversao(num,N,M);

}

