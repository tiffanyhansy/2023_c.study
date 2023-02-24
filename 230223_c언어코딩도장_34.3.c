//디버거에서 포인터 확인하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *nump;
    int n1 = 10;

    nump = &n1;

    *nump = 20;

    printf("%d\n", *nump);
    printf("%d\n", n1);
    
    return 0;
}
