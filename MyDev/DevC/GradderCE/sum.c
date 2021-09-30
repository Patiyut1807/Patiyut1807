#include <stdio.h>
#include <math.h>
int main()
{

    long int a, b;

    scanf("%ld %ld", &a, &b);
    
        if (a >= b)
        {
            printf("%ld", ((a - (b - 1)) * (a + b)) / 2);
        }
        else
        {
            printf("%ld", ((b - (a - 1)) * (a + b)) / 2);
        }

    return 0;
}