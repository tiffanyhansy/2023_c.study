//33. 4의 코드 단축하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for ( int i = 0; ++i <= 100;) // ++i <= 100 은 증가 연산자의 특성을 이용하여 반복할 때마다 1씩 증가시킨 뒤 100보다 작거나 같은지 검사
        printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuzz\n", i);
        
    return 0;
}
