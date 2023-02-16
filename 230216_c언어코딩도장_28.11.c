#include <stdio.h>

int main()
{
    int money;

    scanf("%d", &money);

    while (money >= 1200)  
    {
        money = money - 1200;
        printf("%d\n", money);
    }
    
    return 0;
}
