//다양한 자료형의 포인터 선언하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long *numptr1;     //long long형 포인터 선언
    float * numptr2;       //float 형 포인터 선언
    char * cptr1;       //char형 포인터 선언

    long long num1 = 10;    
    float num2 = 3.5f;      
    char c1 = 'a';      

    numptr1 = &num1;      // num1의 메모리 주소 저장
    numptr2 = &num2;    // num2의 메모리 주소 저장
    cptr1 = &c1;    //c1의 메모리 주소 저장

    printf("%lld\n", *numptr1);   //10
    printf("%f\n", *numptr2);  //3.5
    printf("%c\n", *cptr1);   //a

    return 0;
}
