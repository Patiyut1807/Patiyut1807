#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && (b > 0 && c > 0))
    {
        if (a > b && c > b && c >= a) //bac
        {
            d = a;
        }
        else if (b > a && c >= b && c > a) //abc
        {
            d = b;
        }
        else if (c > a && b >= c && b > a) //acb
        {
            d = c;
        }
        else if (b > c && a >= b && a > c) //cba
        {
            d = b;
        }
        else if (a > c && b >= a && b > c) //cab
        {
            d = a;
        }
        else if (c > b && a > b && a >= c) //bca
        {
            d = c;
        }
    }
    else
    {

        return 0;
    }
    printf("%d", d);

    return 0;
}