#include <stdio.h>
int main()

{
    int a, x3, x5, x7, s;
    scanf("%d", &a);
    x3 = a % 3;
    x5 = a % 5;
    x7 = a % 7;
    if (x3 != 0 && (x5 != 0 && x7 != 0))
    {
        s = 0;
    }
    else if (x3 == 0 && (x5 != 0 && x7 != 0))
    {
        s = 1;
    }
    else if (x3 != 0 && (x5 == 0 && x7 != 0))
    {
        s = 2;
    }
    else if (x3 == 0 && (x5 == 0 && x7 != 0))
    {
        s = 3;
    }
    else if (x3 != 0 && (x5 != 0 && x7 == 0))
    {
        s = 4;
    }
    else if (x3 == 0 && (x5 != 0 && x7 == 0))
    {
        s = 5;
    }
    else if (x3 != 0 && (x5 == 0 && x7 == 0))
    {
        s = 6;
    }
    else if (x3 == 0 && (x5 == 0 && x7 == 0))
        {
            s = 7;
        }

    printf("%d", s);
    return 0;
}