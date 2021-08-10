#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, y, x, m, c;
    scanf("%lf %lf,%lf %lf", &x1, &y1, &x2, &y2);
    if (x1 == x2 && y1 == y2)
    {
        printf("ERROR");
    }
    else
    {
        if (x1 == x2)
        {
            printf("ERROR");
        }
        else
        {
            x = x2 - x1;
            y = y2 - y1;
            m = y / x;
            c = y1-(m * x1); 
            printf("y=%.2fx+%.2f", m, c);
        }
    }
    return 0;
}