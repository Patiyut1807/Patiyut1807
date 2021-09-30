#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    c=b;
    if (a > b)
    {
        c = a;
        a = b;
        b = c;
    }
    do
    {
        if (b % a != 0)
        {
            c%= a;
            b=a;
            a=c;
        }
        else
        {
            printf("Greatest common divisor = %d", a);
            return 0;
        }

    } while (1);

    return 0;
}