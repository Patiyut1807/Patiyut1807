#include <stdio.h>

int main()
{
    long int a;
    scanf("%d", &a);
    if (a < 0 || a > 99)
    {
        printf("ERROR");
    }
    else
    {
        printf("%d + %d = %d\n", a - 2, a - 2, (a - 2) * 2);
        printf("%d + %d = %d\n", a - 1, a - 1, (a - 1) * 2);
        printf("%d + %d = %d\n", a, a, (a)*2);
        printf("%d + %d = %d\n", a + 1, a + 1, (a + 1) * 2);
        printf("%d + %d = %d\n", a + 2, a + 2, (a + 2) * 2);
    }

    return 0;
}