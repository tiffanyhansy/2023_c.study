//계단식으로 별 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int i, j;

    for ( i = 0 ; i < 5 ; i++)
    {
        for ( j = 0 ; j <= i ; j++)
        {
            printf("*");
        }
       
        printf("\n");
    }

    return 0;
}
