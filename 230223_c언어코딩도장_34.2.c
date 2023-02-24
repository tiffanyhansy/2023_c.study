//역참조 연산자 사용하기 = 메모리 주소가 있는 곳으로 이동해서 값을 가져오고 싶을 때

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *nump;      //포인터 변수 선언
    int n1 = 10;
    
    nump = &n1;     //n1의 메모리 주소를 포인터 변수에 저장

    *nump = 20;     //역참조 연산자로 메모리 주소에 접근하여 20을 저장

    printf("%d\n", *nump);       //num1의 값 출력
    printf("%d\n", n1);        //실제 n1 값도 바뀜

    return 0;
}
