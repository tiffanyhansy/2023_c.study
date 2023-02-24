//2와 7의 배수, 공배수 처리하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i<= 100; i++)
    {
        if (i % 2 == 0 && i % 7 == 0) printf("FizzBuzz\n");
        else if (i % 7 == 0) printf("Buzz\n");
        else if (i % 2 == 0) printf("Fizz\n");
        else printf("%d\n", i);
    }

    return 0;
}
