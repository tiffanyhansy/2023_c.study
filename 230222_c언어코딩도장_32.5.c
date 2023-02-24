//switch에서 반복문 빠져나오기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;

    for (int i = 0 ; i < 1 ; i ++)
    {
        switch (n)
        {
        case 1:
            printf("1입니다\n");
            goto EXIT;

        default:
            break;
        
        }
    }
    EXIT : return 0;
}
