//중첩 루프 빠져나오기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (num1 == 10)
                goto EXIT2; //EXIT1으로 가면 EXIT1,2,3이 전부 실행

            num1++;
        }
    }

EXIT1:
    printf("100\n");

EXIT2:
    printf("200\n");

EXIT3:
    printf("300\n");

    return 0;
}
