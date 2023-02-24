//대각선으로 별 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for ( i = 0; i < 5 ; i++)
    {
        for ( j = 0; j < 5 ; j++)
        {
            if ( i == j)
                printf("*");
            
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
