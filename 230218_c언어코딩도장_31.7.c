//산 모양으로 별 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
  int i,j,num; 

  scanf("%d",&num); 

  for(i=1;i<=num;i++) 
  { 
    for(j=0;j<num-i;j++) printf(" "); 
    for(j=0;j<2*i-1;j++) printf("*"); 
    printf("\n"); 
  } 
 return 0; 
} 
