//포인터 변수 선언하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *nump;    //포인터 변수 선언
    int num1 = 10;
    nump = &num1;    //num1의 메모리 주소를 포인터에 저장 

    printf("%p\n", nump);    //포인터 변수 nump의 값 출력

    printf("%p\n", &num1);    //변수 num1 의 메모리 주소 출력 

    //포인터 = 메모리 주소

    return 0;
}
