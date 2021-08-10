#include <stdio.h>
#include <math.h>
int main()
{
    char a[100];
    long int d, w, n, n1, n2;
    double w1, d1, w2, w3;

    scanf("%s", a);

    for (int i = 0; a[i] != 0; i++)
    {
        if (a[i] == '.' || !(a[i] >= '0' && a[i] <= '9'))
        {
            printf("ERROR");
            return 0;
        }
    }
    sscanf(a, "%lf", &w1);
    if (n <= 0)
    {
        printf("ERROR");
    }
    else
    {
        w1 /= 2;
        n = ceil(w1);
        d = n % 7;
        w = n / 7;

        printf("Takes about %ld weeks %ld days", w, d);
    }
    return 0;
}