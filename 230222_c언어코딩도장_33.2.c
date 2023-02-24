//3의 배수일 때와 5의 배수일 때 처리하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1 ; i <= 100 ; i++)
    {
        if ( i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else printf("%d", i);
    }

    return 0;
}
