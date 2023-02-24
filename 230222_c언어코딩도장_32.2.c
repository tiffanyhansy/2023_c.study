//중첩 루프 빠져나오기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    
    for (int i = 0 ; i < 10 ; i++)
    {
        for (int j = 0 ; j < 10 ; j++)
        {
            if (n == 20)
                goto EXIT;

            n++;
        }
    }
    EXIT : 
        printf("%d\n", n);

    return 0;
}
