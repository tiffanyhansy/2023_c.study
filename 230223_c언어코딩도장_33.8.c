//5와 11의 배수, 공배수 처리하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num1, num2;
    scanf("%d %d", &num1, &num2);

    for (i = num1 ; i <= num2 ; i++)
    {
        if (i % 5 == 0 && i % 11 == 0) printf("FizzBuzz\n");
        else if (i % 5 == 0) printf("Fizz\n");
        else if (i % 11 == 0) printf("Buzz\n");
        else printf("%d\n", i);
    }

    return 0;
}
