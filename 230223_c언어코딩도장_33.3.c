//3과 5의 공배수 처리하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for ( int i = 0 ; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) printf("Fizzbuzz\n");
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else printf("%d\n", i);
    }

    return 0;
}
